#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	rectangle(300,200,400,200);
	circle(350,300,50);
	getch();
}
