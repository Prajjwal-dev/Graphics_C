#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>

#define ROWS 10
#define COLUMNS 20
#define PIPE_DISTANCE 5
#define BIRD_ROW 5
#define BIRD_COLUMN 3
#define PIPE_WIDTH 2
#define PIPE_GAP 3
#define SLEEP_TIME 500000

void clearScreen() {
    printf("\033[H\033[J");
}

void drawBird(int row, int column) {
    printf("\033[%d;%dH", row, column);
    printf(">");
}

void eraseBird(int row, int column) {
    printf("\033[%d;%dH", row, column);
    printf(" ");
}

void drawPipe(int row, int column) {
    int i;
    for (i = 0; i < PIPE_WIDTH; i++) {
        printf("\033[%d;%dH", row + i, column);
        printf("|");
    }
}

void erasePipe(int row, int column) {
    int i;
    for (i = 0; i < PIPE_WIDTH; i++) {
        printf("\033[%d;%dH", row + i, column);
        printf(" ");
    }
}

int kbhit(void) {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if(ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

int main() {
    int birdRow = BIRD_ROW;
    int birdColumn = BIRD_COLUMN;
    int pipeColumn = COLUMNS - 1;
    int pipeRowTop, pipeRowBottom;
    int score = 0;
    char input;

    clearScreen();

    while (1) {
        clearScreen();

        // Draw bird
        drawBird(birdRow, birdColumn);

        // Draw pipes
        pipeRowTop = rand() % (ROWS - PIPE_GAP - 1);
        pipeRowBottom = pipeRowTop + PIPE_GAP;
        drawPipe(0, pipeColumn);
        drawPipe(pipeRowBottom, pipeColumn);

        // Move pipes left
        while (pipeColumn > 0) {
            usleep(SLEEP_TIME);

            // Check for collision
            if (birdColumn == pipeColumn && (birdRow <= pipeRowTop || birdRow >= pipeRowBottom)) {
                clearScreen();
                printf("Game Over! Score: %d\n", score);
                return 0;
            }

            // Check for passing through the pipe
            if (birdColumn == pipeColumn) {
                score++;
            }

            // Erase pipes
            erasePipe(0, pipeColumn);
            erasePipe(pipeRowBottom, pipeColumn);

            // Move pipes left
            pipeColumn--;

            // Draw pipes
            drawPipe(0, pipeColumn);
            drawPipe(pipeRowBottom, pipeColumn);

            // Handle user input
            if (kbhit()) {
                input = getchar();
                if (input == ' ') {
                    birdRow--;
                }
            }

            // Move bird down
            birdRow++;

            // Redraw bird
            eraseBird(birdRow - 1, birdColumn);
            drawBird(birdRow, birdColumn);

            // Check for collision with top and bottom borders
            if (birdRow <= 0 || birdRow >= ROWS - 1) {
                clearScreen();
                printf("Game Over! Score: %d\n", score);
                return 0;
            }
        }
    }

    return 0;
}

