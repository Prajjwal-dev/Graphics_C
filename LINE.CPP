#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main() {
    clrscr();
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Coordinates of two points
    int x1 = 100, y1 = 100, x2 = 300, y2 = 200;

    // Drawing line using line() function
    line(x1, y1, x2, y2);
    getch();
    closegraph();
}

