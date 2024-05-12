#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

     // Draw rectangle
    rectangle(100, 100, 300, 200);

    // Fill inside area of rectangle with light blue
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(200, 150, WHITE);

    // Draw thicker arrow
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    line(50, 150, 100, 150);
    line(100, 150, 100, 140);
    line(100, 150, 100, 160);
    line(50, 150, 80, 135);
    line(50, 150, 80, 165);
    floodfill(60, 145, WHITE);

    getch();
    closegraph();
}

