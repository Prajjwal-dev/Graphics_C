#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	line(100, 100, 300, 200);
	getch();
	closegraph();
}