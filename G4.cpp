#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int gd=DETECT, gm;
	int arr[] = {10,40,40,10,70,40,70,70,40,100,10,70,10,40};

	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setfillstyle(SOLID_FILL,GREEN);
	drawpoly(7,arr);
	floodfill(11,41,15);

	getch();
	closegraph();
}
