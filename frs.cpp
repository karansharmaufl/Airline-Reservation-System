#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
class Ticket;
char ch1;
int j=0;


void display8(){
clrscr();
int i,gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setbkcolor(0);
setcolor(15);
circle(300,200,100);
circle(300,200,104);
line(250,150,350,150);
line(250,151,350,151);
line(250,152,350,152);
line(250,153,350,153);
line(250,154,350,153);
line(250,155,350,153);
arc(290,180,250,90,30);
arc(290,180,250,90,31);
arc(290,180,250,90,32);
arc(290,180,250,90,33);
line(280,210,320,270);
line(281,210,321,270);
line(285,180,335,180);
line(285,181,335,181);
line(285,182,335,182);
for(i=0;i<=360;i=i+45)
{
arc(300,200,0,0+i,110);
arc(300,200,0,0+i,111);
arc(300,200,0,0+i,112);
arc(300,200,0,0+i,113);
arc(300,200,0,0+i,114);
arc(300,200,0,0+i,115);
arc(300,200,0,0+i,116);

delay(300);

if(i==360)
break;

}
getch();
}

void display9(){
  int i, gd = DETECT, gm;

   initgraph(&gd,&gm,"C:\\TC\\BGI");

clrscr();
setcolor(YELLOW);
setbkcolor(RED);
line(500,402,526,406);
line(530,380,525,405);
line(530,380,535,385);
line(535,385,537,395);
line(537,395,540,397);
line(540,397,543,400);
line(543,400,545,410);
line(545,410,550,415);
line(550,415,560,430);
line(560,430,563,435);
line(563,435,562,440);
line(562,440,561,445);
line(561,445,555,460);
line(555,460,540,470);
line(540,470,535,470);
line(535,470,530,467);
arc(500,468,0,40,30);
arc(505,460,0,100,10);
line(515,460,522,450);
line(505,450,490,455);
line(490,455,470,459);
line(470,459,455,458);
line(455,458,457,455);
line(457,455,454,450);
line(454,450,450,423);
line(450,423,470,420);
line(470,420,472,410);
line(472,410,474,400);
line(474,400,476,403);
line(476,403,478,395);
line(478,395,485,392);
line(485,392,495,393);
arc(500,395,110,270,5);
outtextxy(480,420,"AUSTRALIA");
//newzeland
line(580,460,590,450);
line(590,450,587,447);
line(587,447,600,430);
line(600,430,595,425);
line(595,425,575,450);
line(575,450,580,460);
line(600,420,590,410);
line(590,410,600,405);
line(600,405,605,408);
line(605,408,608,412);
line(608,412,611,408);
line(611,408,615,415);
line(615,415,600,420);
//asia
//solomon islands
line(530,350,550,360);
arc(530,355,30,180,5);
line(525,357,515,355);
line(515,355,510,356);
line(510,356,512,350);
line(512,350,508,340);
line(508,340,498,338);
line(498,338,530,340);
line(530,340,550,360);
//india
arc(354,255,190,0,5);
putpixel(353,254,5);
arc(350,245,200,300,6);
line(350,255,353,252);
line(361,255,359,255);
line(363,260,361,255);
line(366,270,363,260);
line(380,300,366,270);
line(380,300,381,299);
line(381,299,383,299);
line(383,299,386,298);
line(386,298,388,295);
line(388,295,389,280);
line(389,280,400,270);
line(400,270,420,255);
//west side of india
line(345,250,338,240);
line(338,240,330,235);
line(330,235,320,235);
line(320,235,315,230);
line(315,230,312,229);
line(312,229,308,233);
line(308,233,290,227);
line(290,227,288,235);
line(288,235,298,244);
line(298,244,310,240);
line(310,240,322,245);
line(322,245,313,250);
line(313,250,310,253);
line(310,253,300,262);
line(300,262,280,270);
line(280,270,265,240);
line(265,240,260,241);
line(260,241,268,265);
//srilanka
line(395,305,400,310);
line(400,310,405,320);
line(405,320,407,325);
line(407,325,400,335);
line(400,335,395,330);
line(395,330,393,325);
line(393,325,395,305);

//africa
line(268,265,285,272);
line(285,272,298,270);
line(298,270,290,285);
line(290,285,280,300);
line(280,300,275,310);
line(275,310,270,320);
line(270,320,271,350);
line(271,350,270,360);
line(270,360,260,365);
line(260,365,262,385);
line(262,385,258,387);
line(258,387,250,410);
line(250,410,245,420);
line(245,420,225,424);
line(225,424,220,420);
line(220,420,205,390);
line(205,390,210,380);
line(210,380,208,370);
line(208,370,200,350);
line(200,350,198,340);
line(198,340,190,330);
line(190,330,192,320);
line(192,320,188,322);
line(188,322,185,320);
line(185,320,155,322);
line(155,322,145,315);
line(145,315,143,305);
line(143,305,146,299);
//europe
line(146,299,146,280);
line(146,280,147,260);
line(147,260,155,245);
line(155,245,190,247);
line(190,247,210,250);
line(210,250,250,250);
line(250,250,260,255);
line(260,255,263,245);
line(200,235,210,240);
line(210,240,215,235);
line(215,235,225,230);
line(225,230,220,225);
line(220,225,225,222);
line(225,222,230,225);
line(230,225,232,227);
line(215,225,205,210);
line(215,225,220,230);
line(220,230,200,235);
line(200,220,205,210);
line(200,220,190,210);
line(190,210,185,210);
line(185,210,170,230);
line(170,230,155,230);
line(155,230,150,200);
line(150,200,170,200);
line(170,200,170,180);
line(170,180,160,170);
line(160,170,160,166);
line(160,166,165,165);
line(165,165,180,150);
line(180,150,200,145);
line(200,145,220,143);
line(220,143,222,135);
line(222,135,230,130);
line(230,130,250,125);
arc(300,120,70,190,50);
line(320,73,340,60);
line(340,60,350,60);
line(350,60,370,50);
line(370,50,380,60);
line(380,60,400,60);
line(400,60,405,40);
line(405,40,460,35);
line(460,35,450,50);
line(450,50,470,45);
line(470,45,480,45);
line(480,45,500,55);
line(500,55,550,60);
line(550,60,520,80);
line(520,80,500,100);
line(500,100,490,100);
line(490,100,480,130);
line(480,130,500,130);
line(500,130,490,160);
line(490,160,480,170);
arc(440,200,290,37,50);
line(450,260,460,245);
line(450,260,470,280);
line(470,280,460,295);
line(460,295,440,270);
line(440,270,430,280);
line(430,280,425,278);
line(425,278,427,273);
line(427,273,426,255);
line(426,255,420,255);
line(232,227,210,200);
line(210,200,220,190);
line(220,190,240,220);
line(240,220,250,220);
line(250,220,260,210);
line(260,210,260,220);
line(260,220,240,225);
line(240,225,240,235);
line(240,235,260,230);
line(260,230,262,245);
//south america
line(100,300,90,320);
line(90,320,90,350);
line(90,350,70,400);
line(70,400,68,430);
line(68,430,75,440);
line(75,440,50,427);
line(68,430,50,427);
line(50,427,50,390);
line(50,390,47,350);
line(47,350,30,340);
line(30,340,25,320);
line(25,320,25,300);
line(25,300,27,280);
line(27,280,60,285);
line(60,285,62,295);
line(62,295,100,300);
//usa
line(60,280,60,270);
line(60,270,50,260);
line(50,260,50,255);
line(60,280,50,270);
line(40,270,50,270);
line(40,270,30,260);
line(30,260,35,250);
line(34,250,24,210);
//line(30,210,25,230);
line(25,210,20,200);
line(20,200,30,195);
line(30,195,40,170);
line(40,170,30,140);
line(30,140,25,120);
line(25,120,20,115);
line(20,115,10,90);
line(10,90,5,90);
line(5,90,5,35);
line(5,35,20,40);
line(20,40,30,32);
line(30,32,80,39);
line(80,39,84,30);
line(84,30,90,30);
line(90,30,110,50);
line(110,50,90,70);
line(90,70,100,130);
line(100,130,110,132);
line(110,132,108,110);
line(108,110,120,115);
line(120,115,120,125);
line(120,125,116,160);
line(116,160,112,200);
line(112,200,112,210);
line(112,210,100,215);
line(100,215,95,220);
line(95,220,100,240);
line(100,240,95,240);
arc(70,240,0,220,25);
//alaska
line(650,150,620,145);
line(620,145,610,135);
line(610,135,605,140);
line(605,140,602,140);
line(602,140,600,136);
line(600,136,585,160);
line(585,160,588,164);
line(588,164,560,180);
line(560,180,565,170);
line(565,170,567,170);
line(567,170,580,145);
line(580,145,555,140);
line(555,140,550,125);
line(550,125,565,110);
line(565,110,565,105);
line(565,105,555,105);
line(555,105,555,100);
line(555,100,552,97);
line(552,97,555,94);
line(555,94,558,97);
line(558,97,568,97);
line(568,97,562,70);
line(562,70,565,65);
line(565,65,570,65);
line(570,65,590,40);
line(590,40,610,50);
line(610,50,615,55);
line(615,55,625,60);
line(625,60,635,65);
line(635,65,640,65);
outtextxy(580,100,"ALASKA");
//u.k
//line(160,100,150,105);
line(150,105,145,115);
line(145,115,150,125);
line(150,125,147,128);
line(147,128,147,132);
line(147,132,155,132);
line(155,132,157,138);
line(157,138,150,138);
line(150,138,150,148);
line(150,148,145,152);
line(145,152,145,154);
line(145,154,160,150);
line(160,150,160,145);
line(160,145,162,148);
line(162,148,175,145);
line(175,145,176,140);
line(176,140,173,136);
line(173,136,178,133);
line(178,133,182,128);
line(182,128,180,124);
line(180,124,176,122);
line(176,122,173,110);
line(173,110,170,100);
line(170,100,166,97);
line(166,97,170,85);
line(170,85,164,85);
line(164,85,168,70);
line(168,70,160,68);
line(160,68,155,75);
line(155,75,150,105);

//japan
line(510,220,500,230);
line(500,230,490,235);
line(490,235,485,240);
line(485,240,480,243);
line(480,243,485,249);
line(485,249,485,245);
line(485,245,495,240);
line(495,240,493,245);
line(493,245,497,250);
line(497,250,500,240);
line(500,240,510,230);
line(510,230,520,220);
line(520,220,525,210);
line(525,210,520,210);
line(520,210,510,220);
line(520,185,505,180);
line(505,180,510,190);
line(510,190,505,200);
line(505,200,510,190);
line(505,200,520,200);
line(520,200,520,185);



outtextxy(200,170,"EUROPE");
outtextxy(350,150,"ASIA");
outtextxy(200,300,"AFRICA");
outtextxy(20,320,"S.AMERICA");
outtextxy(40,150,"N.AMERICA");
outtextxy(155,115,"UK");


//dots
setlinestyle(1,0,1);
setcolor(YELLOW);
circle(380,235,3);
circle(600,410,3);
circle(530,410,3);
circle(370,270,3);
circle(100,160,3);
circle(170,130,3);
circle(170,200,3);
circle(250,400,3);
line(380,235,600,410);
line(600,410,530,410);
line(370,270,250,400);
line(380,235,100,160);
line(370,270,170,130);
line(370,270,170,200);

getch();
closegraph();



}

void display_plane()
{
   int i, gd = DETECT, gm;

   initgraph(&gd,&gm,"C:\\TC\\BGI");

   for( i = 0 ; i <= 420 ; i = i + 10 )
   {
     setbkcolor(3);

    //CLOUD DESIGN
    line(400,350,180,350);//baseline of cloud1
    arc(360,350,0,150,40);//3rd cloud1 arc
    arc(290,330,0,180,36); //2nd cloud1 arc
    arc(220,350,30,180,40);//1st cloud1 arc

    line(400,260,600,260);//baseline of cloud2
    arc(560,260,0,150,40);//3rd cloud2 arc
    arc(495,240,0,180,30); //2nd cloud2 arc

    arc(435,260,30,180,35);//1st cloud2 arc


     rectangle(50+i,70,250+i,90);
     arc(135+i,45,300,130,5);//light1 wing1
     arc(145+i,110,220,130,5);//light2 wing2
     setcolor(15);
    //AIRPLANE DESIGN
     line(250+i,70,265+i,80);//front face1
     line(265+i,80,250+i,91);//front face2
     line(100+i,10,120+i,70);//wing1 part1
     line(110+i,10,150+i,70);//wing1 part2
     line(100+i,10,110+i,10);//wing1 connect
     line(120+i,90,110+i,150);//wing2 part1
     line(150+i,90,120+i,150);//wing2 part2
     line(110+i,150,120+i,150);//wing2 connect
     line(50+i,45,60+i,70);//backwing1 part1
     line(50+i,45,70+i,70);//backwing1 part2
     line(70+i,90,50+i,113);
     line(60+i,90,50+i,113);
     outtextxy(130+i,75,"KRP Airlines");
      delay(100);

      if( i == 420 )
	 break;


      cleardevice(); // clear screen
   }
//   cout<<"Press any key";
//   getch();
   closegraph();

}



void display1()//First Page
{
textmode(BW40);
textcolor(GREEN);
cout<<"\n\n\n\n\t";
cprintf("        WELCOME TO ");
cout<<"\n\t";
cprintf("FLIGHT RESERVATION DATABASE" );
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
textcolor(GREEN );
cprintf("Made By:");
cout<<"\n";
cprintf("\t Karan Sharma 121279");
cout<<endl;
cprintf("\t Rahul Vaid   121280");
cout<<endl;
cprintf("\t Pansul Bhatt 121285");
}
void timex(void);

void display2(void)//2 Page , Part 1
{
textbackground(BLACK);
textcolor(WHITE);

textmode(BW80);

textbackground(BLACK);
textcolor(GREEN);


cout<<"\n\t\t\t\t";
cprintf("KRP AIRLINES");

timex();
cprintf("\n\rWelcome Dear Guest,");
}

void display3()    //2 Page 2 part
{

 textcolor(YELLOW);
// textbackground(BLUE);
 cout<<"\n\n\n";
 cprintf("________________________________________________________________________________");
 textbackground(BLUE);
 cprintf("|         1          |           2           |           3         |     4     |");
 textcolor(YELLOW);
 textbackground(BLUE);
 cprintf("|  FLIGHT SCHEDULE   |      WORLD  MAP       |       BOOK TICKET   |    EXIT   |");
 textcolor(YELLOW);
 cprintf("________________________________________________________________________________");
 cout<<"\n\n\n\n";
 textbackground(BLACK);
 textcolor(RED);
 cout<<endl;
 //textmode(BW40);
 textcolor(YELLOW);
 textbackground(BLUE);
 cprintf("                                K      R      P                                 ");
 cout<<"\n\n\n\n\n\n\n\n";
 //textmode(BW80);
 textcolor(RED);
 textbackground(BLACK);
 cprintf("ENTER YOUR CHOICE :  ");
 cscanf("%d",&ch1);  //2 page 2 part, 1 choice

}
void display_1()
{
display1();
getch();
display2();
display3();
getch();
clrscr();
}
void display7(){
clrscr();
textcolor(YELLOW);
cprintf("1.Make Flight\n        2.Flight schedule\n         3.Back to main menu\n");
cout<<endl;
textcolor(RED);
cprintf("Enter your choice");
}

class Flight
{
	private:
		char name[8];
		char d[4];
		char a[4];
		char q[6];
		char w[6];
		char c[6];
		char j[6];
		char fare[6];

	public:
		Flight(){
		strcpy(name,"");
		strcpy(d,"");
		strcpy(a,"");
		strcpy(q,"");
		strcpy(w,"");
		strcpy(c,"");
		strcpy(j,"");
		strcpy(fare,"");

		}


		void getData()
		{
			cout << "\nEnter Flight:";
			cin>>name;
			cout<<"\nEnter the fare:";
			cin>>fare;
			cout << "\nEnter departure:";
			cin >> d;
			cout << "\nEnter arrival:";
			cin >>a;
			cout<< "\nEnter departure time:";
			cin>>w;
			cout<<" \nEnter arrival time:";
			cin>>q;
			cout<<"\nEnter departure date and month(dd/mm): ";
			cin>>j;
			cout<<"\nEnter arrival date and month(dd/mm): ";
			cin>>c;

		}

		void showData()
			{
			textcolor(YELLOW);
			textbackground(GREEN);
			cprintf(" | NAME | DEPARTURE | ARRIVAL | Arr. Time | Dep. Time | Arr. Date | Dep. Date | ");
			cout<<"\n";
			cprintf("|");
			cout <<name;
			cout<<" ";
			cprintf("|");
			cout <<d;
			cout<<"    ";
			cprintf("|");
			cout<<a;
			cout<<"     ";
			cprintf("|");
			cout<<q;
			cout<<"     ";
			cprintf("|");
			cout<<w;
			cout<<"     ";
			cprintf("|");
			cout<<c;
			cout<<"     ";
			cprintf("|");
			cout<<j;
			cout<<endl;


		}
		void preInput(char *m,char *n,char *o,char *p,char *u,char *r,char *s,char *t)
			{
			 strcpy(name,m);
			 strcpy(d,n);
			 strcpy(a,o);
			 strcpy(q,p);
			 strcpy(w,u);
			 strcpy(c,r);
			 strcpy(j,s);
			 strcpy(fare,t);
			}
		friend void getDetails(Flight,Ticket);


	    }    ;

class Ticket
{
	private:
		char name[10];
		char age[4];
		char sex[4];
		char flight_no[6];
		static int count;
		int ticket_no;
	public:
		friend void getDetails(Flight,Ticket);
		Ticket()
	       {
		strcpy(name,"");
		strcpy(age,"");
		strcpy(sex,"");
		strcpy(flight_no,"");
		count++;
		ticket_no=count+1000;
	       }
		void getTicket()
		{       cout<<"\nEnter the flight no\n";
			cin>>flight_no;
			cout << "\nEnter the name of the passenger:";
			cin>>name;
			cout << "\nEnter the age of the passenger:";
			cin >> age;
			cout << "\nEnter the sex of the passenger:";
			cin >>sex;

		}
void displaypo(char *from,char *to,char *fare)//ticket
{
textmode(BW80);
textcolor(YELLOW);
textbackground(BLUE);
cout<<"\n\n\n\n\n";
cprintf("                            KRP AIRWAYS                              ");
cout<<"\n";
textcolor(YELLOW);
textbackground(BLACK);
cprintf("ECONOMY CLASS ");
cout<<"\t\t\t\t\t";
cprintf("FLIGHT NO. : %s",flight_no);
cout<<"\n\n";
cprintf("TICKET NO: %d",ticket_no);
cout<<"\n\n";
cprintf("BOARDING TERMINAL : T-3");
cout<<"\t\t\t\t";
cprintf("FROM: %s",from);
cout<<"\n";
cprintf("BOARDING GATE : 2-A    ");
cout<<"\t\t\t\t";
cprintf("TO: %s",to);
cout<<"\n\n";
cprintf("PASSENGER NAME : %s",name);
cout<<"\t\t\t\t";
cprintf("SEAT NO.: 232");
cout<<"\n\n";
cprintf("AGE : %s",age);
cout<<"\t\t\t\t\t";
cprintf("SEX: %s",sex);
cout<<"\n\n";
cprintf("JOURNEY FARE :%s",fare);
cout<<"\n\n";
textbackground(BLUE);
cprintf("          THANK YOU FOR TRAVELLING WITH US , HAVE A SAFE JOURNEY     ");
//cout<<"\n\n\n\n";
textcolor(WHITE);
textbackground(BLACK);
cprintf("                                   PRESS Ctrl+P TO PRINT                                    ");
}

};
int Ticket :: count;
void getDetails(Flight f,Ticket t)
			{
			 fstream file2;
			 file2.open("sample.txt", ios::in);
			 file2.seekg(0);

			 while(j!=0)
				{

				 if(!file2.eof()){l:
					j--;
					file2.read((char*)&f, sizeof(f));
				      // t.displaypo("a","b"); 								// person
					if(strcmp(f.name,t.flight_no)==0)
						{
						 t.displaypo(f.d,f.a,f.fare);
						 break;
						}
					else
					  goto l;
				}
			}  }

void main()
{
clrscr();
display_plane();
clrscr();

label:display_1();

	clrscr();
	char ch,ch3,user[4],passwd[9]; //choice after 1st choice
	int i=0,i2=0,i3,i4; //counter of objects
	int ch2;
	Flight p,m;
	Ticket t;
	m.preInput("krp-101","del","nyc","1200","1500","7/3","7/3","500");  i++;//counter
	fstream file,file1;
	file1.open("sample1.txt",  ios::out | ios::in );
	file.open("sample.txt",  ios::out | ios::in );
	file.write((char*)&m, sizeof(m));
	m.preInput("krp-441","del","rom","1200","1500","7/3","7/3","400");  i++;//counter
	file.write((char*)&m, sizeof(m));
   switch(ch1){
     label1:  case 1:
	  textbackground(BLACK);
	  display7();
	  textbackground(BLACK);
	  cin>>ch2;
	  clrscr();
	  if(ch2==1)
	  {
	  textcolor(RED);
	  cout<<endl;
	  l5:
	  cprintf("USERNAME: ");
	  cin>>user;
	  cout<<endl<<endl;
	  cprintf("PASSWORD: ");
	  cin>>passwd;
	  if((strcmp(user,"krp")==0)&&(strcmp(passwd,"password")==0))
		{
		  do
				{
				cout << "\nEnter Flight details: ";
				p.getData();
				file.write((char*)&p, sizeof(p));
				cout << "\nEnter another Flight (y/n)? ";
				cin >> ch;
				i++;
				j++;
				}while(ch=='y');
    //	file.close();
    //	file.open("P1.txt",ios::out | ios::in);
       file.seekg(0); // reset to start of the file

// read the first person
      //	display8();
	i2=i;
	clrscr();
	while(i2!=0)
	{
	   if(!file.eof()){
	      i2--;

	    //	p.showData();
		file.read((char*)&p, sizeof(p)); // read another 								// person
		p.showData();
		}

	}  }
	else

	  {
		 cprintf("Invalid username or password");
		 cout<<endl;
		 cprintf("try again (y/n)? ");
		 char c;
		 cin>>c;
		 if(c=='y')
			goto l5;
		 else
			exit(1);
		 }
	  }		  //end of if
	if(ch2==2)
	{
	file.seekg(0);
	i3=i;
	clrscr();
	while(i3!=0)
	{
	   if(!file.eof()){
	      i3--;

	    //	p.showData();
		file.read((char*)&p, sizeof(p)); // read another 								// person
		p.showData();
		}
		}
		getch();

	}
	else if(ch2==3)
	{
	goto label;

	}




	break;
case 2:
       display9();
       break;
case 3:
	    // display8();
do
	{
		cout << "\nEnter persons data: ";
		t.getTicket();
		file1.write((char*)&t, sizeof(t));
		display8();
		clrscr();
		//cout << "\nEnter another person (y/n)?";
		//cin >> ch;
		j++;
	}while(ch=='y');
    //	file.close();
    //	file.open("Po111.txt",ios::out | ios::in);
       file1.seekg(0); // reset to start of the file

// read the first person
i4=j;
	while(i4!=0)
	{
	   if(!file1.eof()){
	      i4--;
		cout << "\nPerson: ";
		file1.read((char*)&t, sizeof(t));
	     //	t.displaypo("wer","run");
		getDetails(p,t);
}
	}

       break;
case 4:
exit(1);
 default:
   cout<<"Invalid input";
	   break;
	}
      cout<<"More(y/n)"<<endl;
      cin>>ch3;
 if(ch3=='y')
goto label;
getch();
}
void timex(void)
{
time_t t;
time(&t);
cout<<"\n";
cprintf("Time of access:  %s", ctime(&t));
}

FRS.CPP
Open with Document Viewer for Google Drive
Displaying FRS.CPP.
