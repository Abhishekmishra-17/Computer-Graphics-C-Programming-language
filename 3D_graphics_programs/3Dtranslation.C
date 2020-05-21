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
maxx=getmaxx();
maxy=getmaxy();
midx=maxx/2;
midy=maxy/2;
axis();
printf("Before translation:(red color)\n");
setcolor(RED);
bar3d(midx+50,midy-100,midx+60,midy-90,10,1);
printf("Enter translation factor");
scanf("%d%d",&x,&y);
printf("\nAfter translation:(green)");
setcolor(GREEN);
bar3d(midx+x+50,midy-(y+100),midx+x+60,midy-(y+90),10,1);
getch();
closegraph();
}