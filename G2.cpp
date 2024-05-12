#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
int gd = DETECT, gm;
int topparr[] = {10,50,70,50,80,40,20,40,10,50};
int sideparr[] = {70,80,80,70,80,40,70,50,70,80};
clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
setfillstyle(SOLID_FILL,LIGHTBLUE);
rectangle(10,50,70,80);
drawpoly(5,topparr);
floodfill(11,51,15);
floodfill(13,49,15);
setfillstyle(SOLID_FILL,BLUE);
drawpoly(5,sideparr);
floodfill(72,75,15);
getch();
closegraph();
}
