#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main() {
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    int i;
    int centerX = getmaxx() / 2; // X coordinate of the center of the screen
    int centerY = getmaxy() / 2; // Y coordinate of the center of the screen
    int sideLength = 100; // Length of each side of the heptagon
    int angle = 360 / 7; // Angle between each vertex of the heptagon
    int xCoords[7], yCoords[7]; // Arrays to store x and y coordinates of the vertices

    // Calculate coordinates of vertices
    for (i = 0; i < 7; i++) {
	xCoords[i] = centerX + sideLength * cos((angle * i + 90) * 3.14159265 / 180);
	yCoords[i] = centerY + sideLength * sin((angle * i + 90) * 3.14159265 / 180);
    }

    // Draw lines between vertices to form the heptagon
    for (i = 0; i < 7; i++) {
	line(xCoords[i], yCoords[i], xCoords[(i + 1) % 7], yCoords[(i + 1) % 7]);
    }

    // Fill the area inside the heptagon with light blue color
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(centerX,centerY,WHITE);

    getch();
    closegraph();
}

