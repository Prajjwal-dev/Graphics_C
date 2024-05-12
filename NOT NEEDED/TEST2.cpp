#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main() {
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, NULL); // initialize graphic mode

    readimagefile("image.jpg", 0, 0, 640, 480); // display image at given position and size

    getch(); // wait for user input
    closegraph(); // close graphic window

}

