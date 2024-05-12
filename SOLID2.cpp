#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
	clrscr();
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	//Drawing line using line() function
	line(100, 200, 200, 100);
	line(200, 100, 500, 100);
	line(500, 100, 600, 200);
	line(100, 200, 200, 300);
	line(200, 300, 500, 300);
	line(500, 300, 600, 200);
	line(200, 100, 200, 300);
	line(500, 100, 500, 300);
	line(250, 150, 450, 150);
	line(450, 150, 450, 250);
	line(450, 250, 250, 250);
	line(250, 250, 250, 150);
	getch();
	closegraph();
}
