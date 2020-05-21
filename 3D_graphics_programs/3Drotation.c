#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int maxx,maxy,midx,midy;
void axis()
{
getch();
cleardevice();
line(midx,0,midx,maxy);
line(0,midy,maxx,midy);
}
void main()
{
int x,y,z,o,x1,x2,y1,y2;
int gd=DETECT,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
//setfillstyle(0,getmaxcolor());
maxx=getmaxx();
maxy=getmaxy();
midx=maxx/2;
midy=maxy/2;
axis();
bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
printf("Enter rotating angle");
scanf("%d",&o);
 x1=50*cos(o*3.14/180)-100*sin(o*3.14/180);
 y1=50*sin(o*3.14/180)+100*cos(o*3.14/180);
 x2=60*cos(o*3.14/180)-90*sin(o*3.14/180);
 y2=60*sin(o*3.14/180)+90*cos(o*3.14/180);
 //axis();
printf("After rotation about z axis\n");
bar3d(midx+x1,midy-y1,midx+x2,midy-y2,5,1);
delay(1000);
//axis();
printf("After rotation  about x axis\n");
bar3d(midx+50,midy-x1,midx+60,midy-x2,5,1);
delay(1000);
//axis();
printf("After rotation about y axis");
bar3d(midx+x1,midy-100,midx+x2,midy-90,5,1);
getch();
closegraph();
}