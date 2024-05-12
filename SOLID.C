#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
    int gd=DETECT,gm, X, Y;
    char a[100];
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	X = getmaxx();
	Y = getmaxy();
    sprintf(a,"X = %d and Y = %d", X, Y);
    outtext(a);
    circle(319,239,20);
    circle(319,239,40);
    rectangle(279,199,359,279);
    line(279,199,319,159);
    line(319,159,359,199);
    getch();
    closegraph();
    }