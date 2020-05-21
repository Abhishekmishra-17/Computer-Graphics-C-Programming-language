#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
int gm,gd=DETECT,x1,x2,y1,y2;
int xn1,xn2,yn1,yn2,rf;
clrscr();
printf("Enter the coordinates x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
printf("Enter the reflection frame \n");
scanf("%d",&rf);
initgraph(&gd,&gm,"c:\\tc\\bgi");
cleardevice();
if((x1<y1)^(x2<y2))
{
xn1=x1+rf;
yn1=y1;
xn2=x2+rf;
yn2=y2;
}
else{
xn1=x1;
yn1=y1+rf;
xn2=x2;
yn2=y2+rf;
}
setcolor(RED); //original line
line(x1,y1,x2,y2);
setcolor(GREEN);              //reflection
line(xn1,yn1,xn2,yn2);
getch();
closegraph();
}
