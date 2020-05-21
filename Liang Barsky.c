#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int gd, gm ;
int x1 , y1 , x2 , y2 ;
int wxmin,wymin,wxmax, wymax ;
float u1 = 0.0,u2 = 1.0 ;
int p1 , q1 , p2 , q2 , p3 , q3 , p4 ,q4 ;
float r1 , r2 , r3 , r4 ;
int x11 , y11 , x22 , y22 ;
clrscr();
printf("Enter the windows left xmin , top boundry ymin\n");
scanf("%d%d",&wxmin,&wymin);
printf("Enter the windows right xmax ,bottom boundry ymax\n");
scanf("%d%d",&wxmax,&wymax);
printf("Enter line x1 , y1 co-ordinate\n");
scanf("%d%d",&x1,&y1);
printf("Enter line x2 , y2 co-ordinate\n");
scanf("%d%d",&x2,&y2);
printf("liang barsky express these 4 inequalities using lpk<=qpk\n");
p1 = -(x2 - x1 ); q1 = x1 - wxmin ;
p2 = ( x2 - x1 ) ; q2 = wxmax - x1 ;
p3 = - ( y2 - y1 ) ; q3 = y1 - wymin ;
p4 = ( y2 - y1 ) ; q4 = wymax - y1 ;
printf("p1=0 line is parallel to left clipping\n");
printf("p2=0 line is parallel to right clipping\n");
printf("p3=0 line is parallel to bottom clipping\n");
printf("p4=0 line is parallel to top clipping\n");

if( ( ( p1 == 0 ) && ( q1 < 0) ) ||( ( p2 == 0 ) && ( q2 < 0) ) ||
( ( p3 == 0) && ( q3 < 0) ) ||( ( p4 == 0) && ( q4 < 0) ) )
{
printf("Line is rejected\n");
getch();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(RED);
rectangle(wxmin,wymax,wxmax,wymin);
setcolor(BLUE);
line(x1,y1,x2,y2);
getch();
setcolor(WHITE);
line(x1,y1,x2,y2);
getch();
}
else
{
if( p1 != 0)
{
r1 =(float) q1 /p1 ;
if( p1 < 0 )
u1 = max(r1 , u1 );
else
u2 = min(r1 , u2 );
}
if( p2 != 0)
{
r2 = (float ) q2 /p2 ;
if( p2 < 0 )
u1 = max(r2 , u1 );
else
u2 = min(r2 , u2 );

}
if( p3 != 0)
{
r3 = (float )q3 /p3 ;
if( p3 < 0 )
u1 = max(r3 , u1 );
else
u2 = min(r3 , u2 );
}
if( p4 != 0)
{
r4 = (float )q4 /p4 ;
if( p4 < 0 )
u1 = max(r4 , u1 );
else
u2 = min(r4 , u2 );
}

if( u1 > u2 )
printf("line rejected\n");
else
{
x11 = x1 + u1 * ( x2 - x1 ) ;
y11 = y1 + u1 * ( y2 - y1 ) ;

x22 = x1 + u2 * ( x2 - x1 );
y22 = y1 + u2 * ( y2 - y1 );

printf("Original line cordinates\n");
printf("x1 = %d , y1 = %d, x2 = %d, y2 = %d\n",x1,y1,x2,y2);
printf("Windows coordinate are \n");
printf("wxmin = %d, wymin = %d,wxmax = %d , wymax = %d ",wxmin,wymin,wxmax,wymax);

printf("New coordinates are \n");
printf("x1 = %d, y1 = %d,x2 = %d , y2 = %d\n",x11,y11,x22,y22);
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(2);
rectangle(wxmin,wymax,wxmax,wymin);
setcolor(1);
line(x1,y1,x2,y2);
getch();
setcolor(0);
line(x1,y1,x2,y2);
setcolor(3);
line(x11,y11,x22,y22);
getch();

}
}
}