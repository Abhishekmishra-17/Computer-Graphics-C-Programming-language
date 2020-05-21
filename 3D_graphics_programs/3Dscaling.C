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
printf("Before scaling(Red):\n");
setcolor(RED);
bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
printf("Enter scaling factors");
scanf("%d%d%d", &x,&y,&z);
//axis();
printf("\nAfter scaling(Green):");
setcolor(GREEN);
bar3d(midx+(x*50),midy-(y*100),midx+(x*60),midy-(y*90),5*z,1);
//axis();
getch();
closegraph();
}
