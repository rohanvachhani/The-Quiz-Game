#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#define w 25

 int x = 10;
 int y = 6;
void box()
{
 //int gd=DETECT,gm;
 //initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 //setcolor(RED);

  clrscr();

  char ch1 = 'Í';
  char ch2 = 'º';
  char ch3 = 'Î';
 //  char ch4 = 'É';
 //  char ch5 = '»';
 //  char ch6 = '¼';
  char ch7 = 'Ë';
  char ch8 = 'Ê';
 //  cout<<ch4;
 //textcolor(BLACK);
 gotoxy(0,0);         // box for question..
 for(int e=0;e<80;e++)
	cout<<ch1;

 gotoxy(1,5);
 for(int e1=0;e1<80;e1++)
	cout<<ch1;

  gotoxy(1,8);       //boxes for options..
  for(int i=0;i<40;i++)
	cout<<ch1;
  cout<<ch7;
 // gotoxy(x,y+1);
 // cout<<ch2;
  for(int j=41;j<80;j++)
	cout<<ch1;
  gotoxy(41,9);
  cout<<ch2;

  gotoxy(41,10);
  cout<<ch3;

  gotoxy(41,11);
  cout<<ch2;

  gotoxy(1,12);
  for(int h=0;h<40;h++)
	cout<<ch1;
  gotoxy(41,12);
  cout<<ch8;

  for(int k=41;k<80;k++)
	cout<<ch1;
  gotoxy(1,10);		//devide to make 4 boxes..
  for(int u=0;u<40;u++)
	cout<<ch1;
  gotoxy(42,10);
  for(int y=41;y<80;y++)
	cout<<ch1;

 // cout<<"rohan vachhani";
  gotoxy(1,2);
  getch();
//  return 0;
closegraph();
  }
