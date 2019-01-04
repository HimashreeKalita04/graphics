//program to rotate a triangle by 45 degrees anticlockwise about its centroid
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}

void rotate(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int m1,n1,m2,n2,m3,n3,xc,yc;
        xc = (x1 + x2 + x3)/3;
        yc = (y1 + y2 + y3)/3;
	float a;
	a=(45*3.14)/180;
	m1 = xc + floor((x1-xc)*cos(a)-(yc-y1)*sin(a));
        n1 = yc - floor((yc-y1)*cos(a)+(x1-xc)*sin(a));
        m2 = xc + floor((x2-xc)*cos(a)-(yc-y2)*sin(a));
        n2 = yc - floor((yc-y2)*cos(a)+(x2-xc)*sin(a));
        m3 = xc + floor((x3-xc)*cos(a)-(yc-y3)*sin(a));
        n3 = yc - floor((yc-y3)*cos(a)+(x3-xc)*sin(a));
	triangle(m1,n1,m2,n2,m3,n3);
	getch();
}
int main()
{
	int gd=DETECT,gm;
	int x1=300,y1=350,x2=250,y2=263,x3=350,y3=263;
	initgraph(&gd,&gm," ");
	triangle(x1,y1,x2,y2,x3,y3);
	getch();
	cleardevice();
	printf(" after rotation..... ");
	rotate(x1,y1,x2,y2,x3,y3);
	closegraph();
	return 0;
}
