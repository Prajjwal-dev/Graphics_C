#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main() {
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw the rectangle for the callout
    rectangle(100, 100, 300, 200);

    // Draw the thicker arrow
    line(50, 150, 100, 150);
    line(50, 150, 70, 130);
    line(50, 150, 70, 170);
    line(50, 150, 60, 150); // Additional line for thickness

    getch();
    closegraph();
}

