#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    // Initialize graphics driver and mode
    int gd=DETECT,gm;
    // Array defining the polygon points
    int arr[]={15,35,35,20,35,30,40,30,40,10,70,10,70,60,40,60,40,40,35,40,35,50,15,35};

    // Clear the screen
    clrscr();
    // Initialize graphics system
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    // Set fill style for the polygon
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    // Draw the polygon
    drawpoly(12,arr);
    // Flood fill the polygon with color
    floodfill(17,36,15);
    // Wait for a key press
    getch();
    // Close the graphics system
    closegraph();
}

