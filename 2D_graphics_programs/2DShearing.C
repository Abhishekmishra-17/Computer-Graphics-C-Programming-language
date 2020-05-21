#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
int gm,gd=DETECT,x1,x2,y1,y2;

float sh;
float xn1,xn2,yn1,yn2;
clrscr();
printf("Enter the coordinates x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
printf("Enter the value for shearing\n");
scanf("%f",&sh);
initgraph(&gd,&gm,"c:\\tc\\bgi");
cleardevice();
xn1=x1+sh*y1;
yn1=y1;
xn2=x2+sh*y2;
yn2=y2;
printf("Line Before shearing\n\n\n");
line(x1,y1,x2,y2);
delay(5000);
cleardevice();
printf("Line after shearing\n");
line(xn1,yn1,xn2,yn2);
getch();
closegraph();
}
