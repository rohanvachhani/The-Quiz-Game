#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>
#include<time.h>
#include<graphics.h>
#include<dos.h>
#include "C:\\TURBOC3\\BIN\\proj\\test10.cpp"
#include "C:\\TURBOC3\\BIN\\proj\\NEW.CPP"
//#include "c:\\TURBOC3\\BIN\\proj\\timer.cpp"
//#include "C:\\TURBOC3\\BIN\\proj\\file.cpp"

int a[10]={-1};
char  name[30];

class Kbc
{
    int a[10];
    unsigned long int money;
    static int qu;
public :
    Kbc () : money(0){};
    void playgame();
    unsigned long int getmoney();
    void start();
    void make_array();
    void wr_rcrd(char [] , unsigned long int );
}ob;
void Kbc :: playgame()
{
    make_array();
}

 void Kbc :: wr_rcrd(char * nm,unsigned long int amt)
{
    ofstream fobj;

    time_t now;// = time(0);
    //char* dt = ctime(&now);
    struct tm * timenow;
    time (&now);
    timenow = localtime(&now);

    fobj.open("C:\\TURBOC3\\BIN\\PROJ\\RECORDS.TXT" , ios :: app);

    fobj.setf(ios :: right ,ios :: adjustfield);

    fobj<<"\n";
    // fobj.seekp(0, ios::beg);
    fobj<<">> Player's name : "<<nm<<"\n";
   // fobj.seekp(80, ios::beg);
    fobj<<">> Price               : "<<amt<<"\n";

   // fobj.seekp(160, ios::beg);
    fobj<<">>Time                : "<<asctime(timenow)<<"\n";
    fobj<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-";

    fobj.close();


}


int Kbc :: qu = 0 ;
//unsigned long Kbc :: money = 0;

void Kbc :: start()
{

     system("cls");
     int ua,s,x;
     //static int qu=0;

	   //make array values..
     x=a[qu];

     qu++;

     s=question(x);

     gotoxy(2,14);
     int  time = 1;
     if(qu<5)
     {
	//timer_fun();      // damm not working !!
	int pos = 16;
	while(time<=20)
       {
	int o = pos;
	gotoxy(2,15);
	cout<<"you have 20 sec. of time..";
	gotoxy(5,o);
	cout<<"ษอออออป";
	gotoxy(5,++o);
	cout<<"บ     บ";
	gotoxy(5,++o);
	cout<<"ศอออออผ";
	gotoxy(7,17);
	cout<<time;
	delay(1000);
	  if(kbhit())
		 break;
       time++;
       }
       if(time>=20)
       {
	gotoxy(30,16);
	cout<<"ออออออออออออออออออออออออออออออออออออออออ";
	gotoxy(30,17);
	cout<<"your time's up..";
	gotoxy(30,18);
	cout<<"ออออออออออออออออออออออออออออออออออออออออ";
	gotoxy(30,19);
	cout<<"YOU WON TOTAL PRICE OF RUPEES :"<<getmoney();
	getch();
	unsigned long int aa = getmoney();
	wr_rcrd(name , aa);
	exit(0);
	}


  }
     gotoxy(30,14);
     cout<<"your answer : ";
     cin>>ua;

     if(ua == s)
    {

	//textbackground(LIGHTGREEN);
	//textcolor(GREEN) ;
	money+=100000;
	gotoxy(30,14);
	cout<<"==============================";
	gotoxy(30,15);
	cout<<"RIGHT ANSWER..YOU WON 100000";
	gotoxy(30,16);
	cout<<"------------------------------";
	gotoxy(30,17);
	cout<<"YOUR TOTAL PRICE IS "<<money;
	gotoxy(30,18);
	cout<<"==============================";

    }
    else{
	//textbackground(12);
	//settextstyle()
	unsigned long int bb = getmoney();
	wr_rcrd(name , bb);

	gotoxy(30,15);
	cout<<"ออออออออออออออออออออออออออออออออออออออออ";
	gotoxy(30,16);
	cout<<"WRONG ANSWER. RIGHT ANSWER IS OPTION "<<s;
	gotoxy(30,17);
	cout<<"ออออออออออออออออออออออออออออออออออออออออ";
	gotoxy(30,18);
	cout<<"YOU WON TOTAL PRICE OF RUPEES :"<<getmoney();
	getch();
       //	clrscr();
	exit(0);
    }


}


void Kbc :: make_array()
{
    srand(time(NULL));
    int r,k;
    static int j=0;

    for(k=0;k<10;k++)
   {

    l:
	r = rand()%21;

	for(int i=0;i<10;i++)
	{
	    if(a[i] == r)
	    {
		goto l;
	    }
	}
	a[j]=r;
	j++;
   }
}

unsigned long int Kbc :: getmoney()
{
   if(qu>=4 && qu<8)
   {
       return 400000;
    }
    else if(qu>=1 && qu<4)
    {
     return 0;

    }
    else if(qu >=8 && qu < 10)
    {
	return 800000;
    }
    else if(qu == 0 )
    {	return 0;	}
    else
	return 1000000;
}

int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    //Kbc ob;

      // gotoxy(30,14);
	settextstyle(SMALL_FONT, HORIZ_DIR, 10);
	outtextxy(100,100,"Enter your name : ");
	gotoxy(30,15);
	gets(name);
    //settextstyle(4,HORIZ_DIR,18);
    intro(name);
    ob.playgame();

    int a,i=0;
     l:
	 gotoxy(30,19);
	 cout<<"ษออออออออออออออออออออออออออออออออออออป";
	 gotoxy(30,20);
	 cout<<"บ                                    บ";
	 gotoxy(30,21);
	 cout<<"ศออออออออออออออออออออออออออออออออออออผ";
	 gotoxy(32,20);
	cout<<"press 1 for play or 2 for quit :";
	cin>>a;
	if(a==1)
	{
	    if(i==10)
	    {

		unsigned long int cc = ob.getmoney();
		ob.wr_rcrd(name , cc);

	    //system("cls");
	    //setbkcolor(LIGHTGREEN);
	       clrscr();
	     gotoxy(30,16);
	     cout<<"---------------------------------------------";
	     gotoxy(30,17);
	     cout<<"GAME FINISHED..YOUR TOTAL PRICE IS :"<<ob.getmoney();
	     gotoxy(30,18);
	     cout<<"---------------------------------------------";
	     getch();
	     exit(0);

	    }
	    else
	    {
		ob.start();
		i++;
		//cout<<"\n **"<<i;
	    }
    }
    else if(a==2)
    {
	unsigned long int dd = ob.getmoney();
	ob.wr_rcrd(name , dd);

	clrscr();


	gotoxy(30,10);
	cout<<"ษอออออออออออออออออออออออออออออออออออออออป" ;
	gotoxy(30,11);
	cout<<"บ                                       บ";
	gotoxy(30,12);
	cout<<"ศอออออออออออออออออออออออออออออออออออออออผ" ;
	gotoxy(31,11);
	cout<<"YOUR TOTAL PRICE IS :"<<ob.getmoney();
	getch();
	return (1);
    }
    else{
       gotoxy(30,22);
	cout<<"invalid enter .. press again.";
    }
	goto l;



}
