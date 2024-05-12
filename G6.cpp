#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    // Initialize graphics driver and mode
	int gd=DETECT,gm;
	// Array defining the polygon points
	int arr[]={10,20,25,20,25,10,85,10,85,20,100,20,100,50,85,50,85,60,25,60,25,50,10,50,10,20};
	
	// Clear the screen
	clrscr();
	// Initialize graphics system
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	// Set fill style for the polygon
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	// Draw the polygon
	drawpoly(13,arr);
	// Flood fill the polygon with color
	floodfill(11,21,15);
	// Wait for a key press
	getch();
	// Close the graphics system
	closegraph();
}

