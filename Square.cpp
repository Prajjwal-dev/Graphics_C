#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw square
    rectangle(100, 100, 250, 250);

    // Draw circles
    circle(100, 100, 75);   // Top-left corner
    circle(250, 100, 75);   // Top-right corner
    circle(100, 250, 75);   // Bottom-left corner
    circle(250, 250, 75);   // Bottom-right corner

    getch();
    closegraph();
}

