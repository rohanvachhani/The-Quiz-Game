#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<stdlib.h>
void intro(char * name)
{
 int x,y,i;
 int g=DETECT, d;
 initgraph(&g, &d,"C:\\TURBOC3\\BGI");
 cleardevice();

 x=getmaxx()/2;
 y=getmaxy()/2;
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 setbkcolor(rand());
 setcolor(4);
 int c=150;
 for(int e=0;e<15;e++)
 {
  for(int i=50;i<100;i++)
  {
   settextstyle(SMALL_FONT, HORIZ_DIR, 10);
   outtextxy(x,y,"Loading...");
   settextstyle(SMALL_FONT, HORIZ_DIR, 5);
   outtextxy(x+5,y+5,"Predicting.. ");
   setcolor(3);
   circle(x,y,i);
   circle(x,y,c);
   c--;
   cleardevice();
  }
  }
  setcolor(6);

 settextstyle(SMALL_FONT, HORIZ_DIR, 10);
 settextjustify(x,y);
  outtextxy(x-70,y-60,"WELCOME");
  delay(150);
  outtextxy(x-70,y-20,"TO");
  delay(150);
  outtextxy(x-10,y-20,"THE");
  delay(150);
  settextstyle(  DEFAULT_FONT, HORIZ_DIR, 4);
  outtextxy(x-70,y+20,"QUIZ GAME");
  delay(150);
  settextstyle(SCRIPT_FONT,HORIZ_DIR,5);
  outtextxy(x-70,y+40,name);
  getch();
closegraph();

 }
