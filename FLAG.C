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
    outtextxy(319, 50, "NEPAL FLAG");
    line(319,119,319,259);
    line(319, 119, 379, 149);
    line(379, 149, 319, 179);
    line(319, 179, 400, 200);
    line(400, 200, 319, 239);
    getch();
    closegraph();
    }
