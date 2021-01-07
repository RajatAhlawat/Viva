#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x,y,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=100;i<=400;i++)
{
delay(10);
cleardevice();
line(100+i,100,50+i,180);
line(100+i,100,150+i,180);
line(50+i,180,100+i,250);
line(150+i,180,100+i,250);
line(100+i,100,100+i,250);
line(50+i,180,150+i,180);
line(100+i,150,10+i,300);
line(100+i,250,70+i,300);
line(100+i,250,130+i,300);
line(70+i,300,130+i,300);

}
outtextxy(450,450,"Rajat Ahlawat");
getch();
closegraph();
}
