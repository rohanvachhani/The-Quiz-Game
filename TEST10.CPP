#include<iostream.h>
#include<iomanip.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#define d_time 1000

#include "c:\\TURBOC3\\BIN\\PROJ\\BOX_TST.cpp"

int ans;

int question(int r)
{
     clrscr();
    cout.setf(ios :: left , ios ::  adjustfield);
     textbackground(LIGHTRED);
     textcolor(WHITE);
    switch(r)
    {
	case 0:
	    box();

	    gotoxy(1,2);
	    cout<<"who invented bol-point pen?";

		gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Right-brothers";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.waterman-brothers";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.bick-brothers";

		gotoxy(43,11);
		delay(d_time);
	    cout<<"4.Biro-brothers"<<endl;

	    ans = 4;
	    break;
	case 1:
	    box();
	    textbackground(LIGHTCYAN);
	    textcolor(WHITE);
	    gotoxy(1,2);
	    cout<<"who is the PM of India?";
	    delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Abdul kalam ";

	    gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Manmohan singh";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Narendra Modi ";

	    gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Kejriwal"<<endl;
	    ans  = 3;
	    break;
	case 2:
	    box();
	    textbackground(LIGHTCYAN);
	    textcolor(WHITE);
		gotoxy(1,2);
	    cout<<"who is CEO of Google?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Satya Nadela";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Sundar pichai";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Mukesh Ambani ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Tim cook"<<endl;
	    ans  = 2;
	    break;
	case 3:
	    box();
	    textbackground(LIGHTCYAN);
	    textcolor(WHITE);
		gotoxy(1,2);
	    cout<<"what is the smallest country in the world?";

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.norvey ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.ROM";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Vatican city ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Denmark"<<endl;
	    ans  = 3;
	    break;
	case 4:
	      box();
	    textbackground(LIGHTCYAN);
	    textcolor(WHITE);
		gotoxy(1,2);
	    cout<<"The price name that is given for best research work in mathematics in the world?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Nobel price ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Able price";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.George price ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Major Mathematics award"<<endl;
	    ans  = 2;
	    break;
	case 5:
	    box();
	    textbackground(LIGHTCYAN);
	    textcolor(WHITE);
		gotoxy(1,2);
	    cout<<"what is the business-capital of China?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Beijing ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Shanghai";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Tianjin ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Taipei"<<endl;
	    ans  = 2;
	    break;
	case 6:
	    box();
	    textbackground(LIGHTCYAN);
	    textcolor(WHITE);
		gotoxy(1,2);
	    cout<<"World's largest theater situated at..?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Spain ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.U.S.A";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.India ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Russia"<<endl;
	    ans  = 1;
	    break;
	case 7:
	    box();
	    textbackground(LIGHTCYAN);
	    textcolor(WHITE);
		gotoxy(1,2);
	    cout<<"Who is the first private plane pilot in India?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.J.R.D Tata ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Ray bell";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Rakesh sharma ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Arbaz malik"<<endl;
	    ans  = 1;
	    break;
	case 8:
	    box();
	    textbackground(LIGHTCYAN);
	    textcolor(WHITE);
		gotoxy(1,2);
	    cout<<"Which is the largest living species of Tortoise in the World , which may weigh about 400 kg?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Sulcata Tortoise ";

	    gotoxy(43,9);
		delay(d_time);
	    cout<<"2.Grenada Tortoise";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Golden Greek Tortoise";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Galapagos Tortoise"<<endl;
	    ans  = 4;
	    break;
	case 9:
	    box();
	    textbackground(LIGHTCYAN);
	    textcolor(WHITE);
		gotoxy(1,2);
	    cout<<"First Olympics held at..";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Athens ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Sydney";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Salvador ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Berlin"<<endl;
	    ans  = 1;
	    break;
	case 10:
	    box();
	    textbackground(LIGHTCYAN);
	    textcolor(WHITE);
		gotoxy(1,2);
	    cout<<"In medicine, which of this is usually denoted by 120/80 for an adult?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.normal pulse ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.normal hearing";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Normal vision ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.normal blood pressure"<<endl;
	    ans  = 4;
	    break;
	case 11:
	    box();
	    gotoxy(1,2);
	    cout<<"Which of this words occurs more then once in our national anthem?";
		delay(d_time);

	    gotoxy(2,9);
		delay(d_time);
	    cout<<setw(20)<<"1.Uchchala ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Jaladhi";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Bhagya ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Mangal"<<endl;
	    ans  = 3;
	    break;
	case 12:
	    box();
	    gotoxy(1,2);
	    cout<<"Which sports woman was made the Brand ambassador of the newly form state of Telanagana?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Sania mirza ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Sania Nehwal";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.P.T Usha ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Mary kom"<<endl;
	    ans = 1;
	    break;
	case 13:
	    box();
	    gotoxy(1,2);
	    cout<<"Where was Mughal Empress Mumtaj mahal burid in 1631";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Agra ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Burhanpur";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Gwalior ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Lahor"<<endl;
	    ans  = 2;
	    break;
	case 14:
	    box();
	    gotoxy(1,2);
	    cout<<"What was the name of Vijaya Dinanath Chauhan's village in film Agnipath?";
		delay(d_time);

	    gotoxy(2,9) ;
	    delay(d_time);
	    cout<<setw(20)<<"1.Charanpur ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Mandva";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Campaner";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Ramgarh"<<endl;
	    ans  = 2;
	    break;
	case 15:
	    box();
	    gotoxy(1,2);
	    cout<<"Which planet has the shortest year and the longest day in the solar system?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Mercury ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Mars";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Jupiter ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Neptune"<<endl;
	    ans  = 1;
	    break;
	case 16:
	    box();
	    gotoxy(1,2);
	    cout<<"Which director won the film-fare award for \"best director\" for most number of times?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Subhash ghai ";

		gotoxy(43,9);
	    delay(d_time);
	cout<<"2.Yash chopra";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Anurag Kashyap ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Bimal Roy"<<endl;
	    ans  = 4;
	    break;
	case 17:
	    box();
	    gotoxy(1,2);
	    cout<<"Which of these names means 'one who is really pleased'";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Anuvarta ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Ashwini";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Amartya";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.Ashutosh"<<endl;
	    ans  = 4;
	    break;
	case 18:
	    box();
	    gotoxy(1,2);
	    cout<<"Which of the cities has a cricket stadium named after a hocky legend that hosts ODI matches?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Ahmedabad ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Gwalior";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Kanpur";

	    gotoxy(43,11);
		delay(d_time);
	    cout<<"4.Mohali"<<endl;
	    ans  = 2;
	    break;
	case 19:
	      box();
		gotoxy(1,2);
	    cout<<"Who is the Author of the man booker prize winning book 'Life Of Pie'?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Julian Barnes";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.J.M.coetzen";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Yann Martai ";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.V.S.naipaul"<<endl;
	    ans  = 3;
	    break;
	case 20:
	    box();
		gotoxy(1,2);
	    cout<<"Butterflies tastes food using which of these body parts?";
		delay(d_time);

	    gotoxy(2,9);
	    delay(d_time);
	    cout<<setw(20)<<"1.Wings ";

		gotoxy(43,9);
	    delay(d_time);
	    cout<<"2.Antenna";

	    gotoxy(2,11);
	    delay(d_time);
	    cout<<setw(20)<<"3.Eyes";

		gotoxy(43,11);
	    delay(d_time);
	    cout<<"4.feet"<<endl;
	    ans  = 4;
	    break;
}
 return ans;
}
