#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main() {
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    // Draw the frame
    line(100, 100, 400, 100); // Top horizontal line
    line(100, 100, 100, 300); // Left vertical line
    line(400, 100, 400, 300); // Right vertical line
    line(100, 300, 400, 300); // Bottom horizontal line

    // Draw the diagonal line
    line(100, 100, 250, 300); // Left to bottom
    line(250, 300, 400, 100); // Bottom to right

    // Add light blue color inside the half frame area
    setfillstyle(SOLID_FILL, LIGHTBLUE); // Choose light blue color
    floodfill(250, 250, WHITE); // Coordinates inside the half frame area

    getch();
    closegraph();
}

