#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
	int gdriver = DETECT, gmode;
	int points[] = {10,70,30,50,30,60,60,60,60,30,50,30,70,10,90,30,80,30,80,60,110,60,110,50,130,70,110,90,110,80,30,80,30,90,10,70};
	int num_points = sizeof(points) /sizeof(points[0]);
	clrscr();
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL, LIGHTBLUE);
	for(int i = 0;i <num_points - 2;i+=2)
	{
	line(points[i],points[i+1],points[i+2],points[i+3]);
	}
	line(points[num_points - 2],points[num_points - 1], points[0], points[1]);
	floodfill(20,70,LIGHTBLUE);
	getch();
	closegraph();
	}

