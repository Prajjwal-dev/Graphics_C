#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void drawCar(int x, int y) {
    // Draw car body
    setcolor(YELLOW);
    rectangle(x, y, x + 150, y + 50);
    rectangle(x + 10, y - 10, x + 100, y + 50);
    
    // Draw windows
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    bar(x + 20, y + 5, x + 40, y + 20);
    bar(x + 70, y + 5, x + 90, y + 20);
    
    // Draw wheels
    setfillstyle(SOLID_FILL, DARKGRAY);
    pieslice(x + 25, y + 50, 0, 360, 20);
    pieslice(x + 125, y + 50, 0, 360, 20);
}

void main() {
    clrscr();
	int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int maxX = getmaxx();
    int carX = 0;

    while (carX < maxX + 150) {
        cleardevice();
	drawCar(carX, 300);
	getch();
        carX += 5;
    }
	getch();
    closegraph();
}

