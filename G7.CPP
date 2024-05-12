#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    // Initialize graphics driver and mode
	int gd=DETECT, gm;
	// Define coordinates for the vertices of the polygon
	int ax=10, ay=10;
	int bx=70, by=10;
	int cx=50, cy=30;
	int dx=30, dy=30;
	int ex=30, ey=50;
	int fx=10, fy=70;
	
	// Clear the screen
	clrscr();
	// Initialize graphics system
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	// Set fill style for the polygon
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	// Draw the polygon by connecting vertices with lines
	line(ax, ay, bx, by);
	line(bx, by, cx, cy);
	line(cx, cy, dx, dy);
	line(dx, dy, ex, ey);
	line(ex, ey, fx, fy);
	line(fx, fy, ax, ay);
	// Flood fill the polygon with color
	floodfill(15, 15, WHITE); // Using white as the fill color
	// Wait for a key press
	getch();
	// Close the graphics system
	closegraph();
}
