#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int gd = DETECT, gm;
clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
setcolor(LIGHTBLUE);
line(50,50,250,50);
line(250,50,250,100);
line(250,100,200,100);
line(200,100,200,50);
floodfill(100,75,LIGHTBLUE);
getch();
closegraph();
}