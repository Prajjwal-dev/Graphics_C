//WAP to draw three concentric circles.
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
	int gd = DETECT, gm;
	int centreX1 = getmaxx() + 350;
	int centreY2 = getmaxy() + 250;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	circle(centreX1,centreY2, 25);
	circle(centreX1,centreY2, 25);
	circle(centreX1,centreY2, 25);
	getch();
	closegraph();
}
