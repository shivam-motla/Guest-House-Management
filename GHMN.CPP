#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
class rooms
{
char name[30];
char city[20];
char nation[20];
int period;
int nroom;

public:
double rmt;
rooms();           //constructor
void availablity();
void getdata();
double rstbill();
void showdetails();
void totalbill(int);
}sd,d,g,c,cd,dx;

rooms::rooms()
{strcpy(name,"NA");
period=0;
rmt=0;
strcpy(city,"NA");
strcpy(nation,"NA");
}

void rooms::availablity()
{
if(strlen(name)==0||strcmpi(name,"NA")==0)
{cout<<"A           ";  cout<<"NA";/*here*/for(int u=0;u<=10;u++)cout<<" "; cout<<period<<"days";        }

else
{cout<<"NA          ";   cout<<name;/*Here */for(int u=0;u<=12-strlen(name);u++)cout<<" ";    cout<<period<<"days";
 }
}


void rooms::getdata()
{
fstream fio;    int roomno;
cout<<"Enter Name Of Guest ->";cin>>name;
cout<<"\nEnter city name -> ";cin>>city;
cout<<"\nEnter The Nationality -> ";cin>>nation;
cout<<"\nEnter No. Of Days Guest Wants to Stay ->";cin>>period;
cout<<"\nPlease confirm the room number ->";cin>>roomno;nroom=roomno;
cout<<"\nYOUR ROOM BEEN ALLOCATED\nHAVE A NICE STAY";
roomno=roomno-1;

fio.seekg(0);

int o=roomno+1;
switch(o)
{
case 1:fio.open("sdrooms.dat",ios::out);fio.write((char*)&sd,sizeof(rooms));break;
case 2:fio.open("drooms.dat",ios::out);fio.write((char*)&d,sizeof(rooms));break;
case 3:fio.open("grooms.dat",ios::out);fio.write((char*)&g,sizeof(rooms)); break;
case 4:fio.open("crooms.dat",ios::out);fio.write((char*)&c,sizeof(rooms)); break;
case 5:fio.open("cdrooms.dat",ios::out);fio.write((char*)&cd,sizeof(rooms));break;
default:cout<<"wrong entry";break;
}
fio.close();
}

void rooms::showdetails()
{
fstream fio;
int dv;
cout<<"enter room no";cin>>dv;
dv=dv-1;
fio.seekg(0);
int j=dv+1;
switch(j)
{
case 1:fio.open("sdrooms.dat",ios::in);fio.read((char*)&sd,sizeof(rooms));break;
case 2:fio.open("drooms.dat",ios::in);fio.read((char*)&d,sizeof(rooms));break;
case 3:fio.open("grooms.dat",ios::in);fio.read((char*)&g,sizeof(rooms)); break;
case 4:fio.open("crooms.dat",ios::in);fio.read((char*)&c,sizeof(rooms)); break;
case 5:fio.open("cdrooms.dat",ios::in);fio.read((char*)&cd,sizeof(rooms));break;
default:cout<<"wrong entry";break;
}


	 cout<<"\nName of Customer     -";cout<<name;
	 cout<<"\nName of City         -";cout<<city;
	 cout<<"\nNationality          -";cout<<nation;
	 cout<<"\nStaying Time Period  -";cout<<period;
   fio.close();
}
double rooms::rstbill()
{
return(period);
}

void rooms::totalbill(int nroom)
{double totamt;         fstream gh;
switch(nroom)
{
case 1:gh.open("sdrooms.dat",ios::in);gh.read((char*)&sd,sizeof(rooms));totamt=sd.rstbill()*1500;break;
case 2:gh.open("drooms.dat",ios::in);gh.read((char*)&d,sizeof(rooms));totamt=d.rstbill()*1000;break;
case 3:gh.open("grooms.dat",ios::in);gh.read((char*)&g,sizeof(rooms));totamt=g.rstbill()*750;break;
case 4: gh.open("crooms.dat",ios::in);gh.read((char*)&c,sizeof(rooms));totamt=c.rstbill()*1000;break;
case 5:gh.open("cdrooms.dat",ios::in);gh.read((char*)&cd,sizeof(rooms));totamt=cd.rstbill()*1500; break;
}
			   gh.close();
double nd=totamt+rmt;
cout<<"\n Total Amount is   \n"<<nd<<" Rupees";

}

//*******************void main starts************

void main()
{
start:
clrscr();

cout<<"                     WELCOME YOU................\n\n\n";
cout<<"HEAVEN GUEST HOUSE is one of the newest guest house in Noida. Guesthouse is";
cout<<"\nequipped with all the general amenities and facilities that go";
cout<<"\nalong with memorable stay.\n";
cout<<"			  ::::::::::::::::::::::::::::\n";
cout<<"	    		  ::                        ::\n";
cout<<"			  ::   @@@@@@@@@@@@@@@@@@   ::\n";
cout<<"			  ::   @                @   ::\n";
cout<<"			  ::   @      THE       @   ::\n";
cout<<"			  ::   @  H E A V E N   @   ::\n";
cout<<"			  ::   @   GUESTHOUSE   @   ::\n";
cout<<"			  ::   @                @   ::\n";
cout<<"			  ::   @@@@@@@@@@@@@@@@@@   ::\n";
cout<<"			  ::                        ::\n";
cout<<"			  ::::::::::::::::::::::::::::\n\n";
cout<<"\n 1. Get availablity";
cout<<"\n 2. Features of room";
cout<<"\n 3. Room allocation";
cout<<"\n 4. Show customer details";
cout<<"\n 5. Cancellation";
cout<<"\n 6. total bill";
cout<<"\n 7. Restaurant";
cout<<"\n 8. exit";
int ch;
cin>>ch;
switch(ch)
{

//Main case 1      ++++++++++++++++++++++++++++++++++++++++

case 1:clrscr();
fstream fio;
cout<<"\n     ROOM AVAILABLITY";
cout<<"\n    -------------------";
cout<<"\nROOM. NO.| TYPE     |CHARGE    |AVAILABLITY   |CUST_NAME   |PERIOD";

cout<<"\n   1:-      Sp. Dlx.   1500        ";
 fio.open("sdrooms.dat",ios::in);
fio.read((char*)&sd,sizeof(rooms)); fio.close();
sd.availablity();

cout<<"\n   2:-      Dlx.       1000        ";
 fio.open("drooms.dat",ios::in);
fio.read((char*)&d,sizeof(rooms)); fio.close();
d.availablity();


cout<<"\n   3:-      Gen.       750         ";
 fio.open("grooms.dat",ios::in);
fio.read((char*)&g,sizeof(rooms)); fio.close();
g.availablity();

cout<<"\n   4:-      Couple     1000        ";
 fio.open("crooms.dat",ios::in);
fio.read((char*)&c,sizeof(rooms)); fio.close();
c.availablity();

cout<<"\n   5:-      C.Dlx      1500        ";
 fio.open("cdrooms.dat",ios::in);
fio.read((char*)&cd,sizeof(rooms)); fio.close();
cd.availablity();
fio.close();

cout<<"\nEnter 'b' to go back";
char k;
cin>>k;
if(k=='b')
goto start;
break;


//Main Case 2  ++++++++++++++++++++++++++++++++++++++++++++


case 2:clrscr(); cout<<"CHOOSE THE ROOM TYPE"<<"\n1. Sp.Delux"<<"\n2. Delux"<<"\n3. General"<<"\n4. Couple"<<"\n5. C. Delux";
cout<<"\nenter any number(<=5)";
int ch2;
cin>>ch2;
switch(ch2)
{case 1:cout<<"\n       FEATURES OF THIS ROOM";
cout<<"\n----------------------------------------------------------------------\n";
cout<<"Room Type    --->    Sp.Delux\n";
cout<<"Room Charge  --->    Rs.1500\n";
cout<<"Bed          --->    1\n";
cout<<"Capacity     --->    1\n\n";
cout<<"         OTHER FEATURES\n";
cout<<"---------------------------------";
cout<<"\n# Geyser Available";
cout<<"\n# T.V. Available\n";break;

case 2:cout<<"\n       FEATURES OF THIS ROOM";
cout<<"\n----------------------------------------------------------------------\n";
cout<<"Room Type    --->    Delux\n";
cout<<"Room Charge  --->    Rs.1000\n";
cout<<"Bed          --->    1\n";
cout<<"Capacity     --->    1\n\n";
cout<<"         OTHER FEATURES\n";
cout<<"---------------------------------\n";
cout<<"# Geyser Available\n";
cout<<"# T.V. Available\n\n";break;

case 3:cout<<"\n       FEATURES OF THIS ROOM";
cout<<"\n----------------------------------------------------------------------\n";
cout<<"Room Type    --->    General\n";
cout<<"Room Charge  --->    Rs.750\n";
cout<<"Bed          --->    1\n";
cout<<"Capacity     --->    1\n\n";
cout<<"         OTHER FEATURES\n";
cout<<"---------------------------------\n";
cout<<"# Geyser Available\n";
cout<<"# T.V. Available\n\n";break;

case 4:cout<<"\n       FEATURES OF THIS ROOM";
cout<<"\n----------------------------------------------------------------------\n";
cout<<"Room Type    --->    Couple\n";
cout<<"Room Charge  --->    Rs.1000\n";
cout<<"Bed          --->    1\n";
cout<<"Capacity     --->    2\n\n";
cout<<"         OTHER FEATURES\n";
cout<<"---------------------------------\n";
cout<<"# Geyser Available\n";
cout<<"# T.V. Available\n\n";break;

case 5:cout<<"\n       FEATURES OF THIS ROOM";
cout<<"\n----------------------------------------------------------------------\n";
cout<<"Room Type    --->    Couple Delux\n";
cout<<"Room Charge  --->    Rs.1500\n";
cout<<"Bed          --->    1\n";
cout<<"Capacity     --->    2\n\n";
cout<<"         OTHER FEATURES\n";
cout<<"---------------------------------\n";
cout<<"# Geyser Available\n";
cout<<"# T.V. Available\n\n";break;

default:cout<<"wrong entry";
}
cout<<"Enter 'c' to go back";
char l;
cin>>l;
if(l=='c')
goto start;
break;


//Main case 3++++++++++++++++++++++++++++++++++++++++++

case 3:clrscr(); cout<<"           ROOM ALLOCATION\n";
cout<<"---------------------------------------------------------\n";
cout<<"Enter the room number in which you want to stay\n";
int rn;
cin>>rn;
switch(rn)
{
case 1:rooms();sd.getdata();

break;

case 2:rooms();d.getdata();
break;

case 3:rooms();g.getdata();

break;

case 4:rooms();c.getdata();

break;

case 5:rooms();cd.getdata();
break;

default:cout<<"\nWrong Entry";break;
}
cout<<"\nEnter 'd' to go back";
char m;
cin>>m;
if(m=='d')
goto start;break;

//Main case 4 +++++++++++++++++++++++++++++++++++++

case 4:clrscr();cout<<"\n\n    DETAILS OF CUSTOMER";
	 cout<<"\n------------------------------------";
	 cout<<"\nEnter The Room Number";
	 int dc;
	 cin>>dc;

	 switch(dc)
	 {
	 case 1:sd.showdetails();
	 break;

	 case 2:d.showdetails();
	 break;

	 case 3: g.showdetails();
	 break;

	 case 4:c.showdetails();
	 break;

	 case 5:cd.showdetails();
	 break;
	 }
	 cout<<"\nEnter 'e' to go back";
char n;
cin>>n;
if(n=='e')
goto start;
	 break;



//Main case 5+++++++++++++++++++++++++++++++++++++++

case 5:clrscr();
fstream fim;
cout<<"\n       CANCELLATION";
cout<<"\n------------------------------\n";
cout<<"\n1.To Cancel Room Sp. Delux (Room=1)";
cout<<"\n2.To Cancel Room Delux     (Room=2)";
cout<<"\n3.To Cancel Room General   (Room=3)";
cout<<"\n4.To Cancel Room Couple    (Room=4)";
cout<<"\n5.To Cancel Room Couple dlx(Room=5)\n";

int cl;
cin>>cl;
switch(cl)
{
case 1:fim.open("sdrooms.dat",ios::out);fio.write((char*)&sd,sizeof(rooms)); sd=dx;  break;
case 2:fim.open("drooms.dat",ios::out);fio.write((char*)&d,sizeof(rooms)); d=dx;break;
case 3:fim.open("grooms.dat",ios::out);fio.write((char*)&g,sizeof(rooms));g=dx;break;
case 4:fim.open("crooms.dat",ios::out);fio.write((char*)&c,sizeof(rooms));c=dx;break;
case 5:fim.open("cdrooms.dat",ios::out);fio.write((char*)&cd,sizeof(rooms));cd=dx;break;

default:cout<<"\nwrong entry";break;
}      fim.close();

cout<<"\nAllocated Room No. "<<cl<<" Cancelled";

cout<<"\nEnter 'f' to go back";
char o;
cin>>o;
if(o=='f')
goto start;
	 break;

//main case 6++++++++++++++++++++++++++++++++++++++
case 6:clrscr();
cout<<"\n     TOTAL AMOUNT\n";
cout<<"-------------------------\n";
cout<<"\n1. For person staying in room no. 1 (sp. dlx)";
cout<<"\n2. For person staying in room no. 2 (dlx)";
cout<<"\n3. For person staying in room no. 3 (general)";
cout<<"\n4. For person staying in room no. 4 (couple)";
cout<<"\n5. For person staying in room no. 5 (couple dlx)";

int jh;
cin>>jh;
jh=jh-1;

int poi=jh+1;
switch(poi)
{
case 1: fio.open("sdrooms.dat",ios::in);
	fio.read((char*)&sd,sizeof(rooms));
	sd.totalbill(poi);fio.close();break;

case 2: fio.open("drooms.dat",ios::in);
	fio.read((char*)&sd,sizeof(rooms));
	d.totalbill(poi);fio.close(); break;

case 3: fio.open("grooms.dat",ios::in);
	fio.read((char*)&sd,sizeof(rooms));
	g.totalbill(poi);fio.close(); break;

case 4: fio.open("crooms.dat",ios::in);
	fio.read((char*)&sd,sizeof(rooms));
	c.totalbill(poi);fio.close(); break;

case 5: fio.open("cdrooms.dat",ios::in);
	fio.read((char*)&sd,sizeof(rooms));
	cd.totalbill(poi);fio.close(); break;

default:cout<<"\nwrong entry";break;
}

cout<<"\nEnter 'g' to go back";
char p;
cin>>p;
if(p=='g')
goto start;
	 break;
//Main case 7+++++++++++++++++++++++++++++++++++++++++
case 7:   again:  clrscr();   double ramt=0;
cout<<"             RESTAURANT\n";
cout<<"--------------------------------\n";
cout<<"\nEnter Room number of the custmer who wants to place order\n";
int jhe;cin>>jhe;

fstream fik;


//switch no person is staying

switch(jhe)
{
case 1:fik.open("sdrooms.dat",ios::in);fik.read((char*)&sd,sizeof(rooms));
// sd.rstbill();
 if(sd.rstbill()==0)
{ cout<<"Sorry! No custumer is staying in this room.....";
	cout<<"\nEnter 'm' to go back";
char m;
cin>>m;
if(m=='m')
goto again;}
	break;
case 2:fik.open("drooms.dat",ios::in);fik.read((char*)&d,sizeof(rooms));

 if(d.rstbill()==0)
{ cout<<"Sorry! No custumer is staying in this room....." ;
	cout<<"\nEnter 'm' to go back";
cin>>m;
if(m=='m')
goto again;}break;
case 3:fik.open("grooms.dat",ios::in);fik.read((char*)&g,sizeof(rooms));

 if(g.rstbill()==0)
{ cout<<"Sorry! No custumer is staying in this room....."  ;
	cout<<"\nEnter 'm' to go back";
cin>>m;
if(m=='m')
goto again;}break;
case 4:fik.open("crooms.dat",ios::in);fik.read((char*)&c,sizeof(rooms));

 if(c.rstbill()==0)
{ cout<<"Sorry! No custumer is staying in this room....."   ;
	cout<<"\nEnter 'm' to go back";
cin>>m;
if(m=='m')
goto again;}break;
case 5:fik.open("cdrooms.dat",ios::in);fik.read((char*)&cd,sizeof(rooms));

 if(cd.rstbill()==0)
{ cout<<"Sorry! No custumer is staying in this room....."    ;
	cout<<"\nEnter 'm' to go back";
cin>>m;
if(m=='m')
goto again;}break;
default:cout<<",,,,,,,,,,,,,,,,,,,";
};
//fik.close();

cout<<"\norder any food item from the list\n";
cout<<"\nS. No.     Food item               price (in rupees)    ";
cout<<"\n1         Shahi Paneer              245     ";
cout<<"\n2         Kadai Paneer              200    ";
cout<<"\n3         Cheese Korma              180  ";
cout<<"\n4         Malai Kofta               170    ";
cout<<"\n5         Malai Paneer              247    ";
cout<<"\n6         Palak Paneer              230    ";
cout<<"\n7         Mix Veg.                  300  ";
cout<<"\n8         Aaloo Gobi                150    ";
cout<<"\n9         Chana Masala              140    ";
cout<<"\n10        Dal Makhani               340    ";
cout<<"\n11        Pista Badam               105    ";
cout<<"\n12        Chocolate Lithi           100";
cout<<"\n13        Vanilla                   100";
cout<<"\n14        Chocolate                 080";
cout<<"\n\n    ";

int cde[15];char choice='y';
int e=0;
while( choice=='y' || choice=='Y'     )
{
cout<<"\nEnter the food code you want to have..";
cin>>cde[e];


cout<<"\nDo you want to have another item......";
cin>>choice;

e=e+1;
}
clrscr();
cout<<"\n you ordered";
cout<<"\n\nS. No.     Food item               price (in rupees)    ";
for(int df=0;df<e;df++)
{
switch(cde[df])
{
case 1:ramt+=245;cout<<"\n1         Shahi Paneer              245     ";break;
case 2:ramt+=200;cout<<"\n2         Kadai Paneer              200    ";break;
case 3:ramt+=180;cout<<"\n3         Cheese Korma              180  ";  break;
case 4:ramt+=170;cout<<"\n4         Malai Kofta               170    ";break;
case 5:ramt+=247;cout<<"\n5         Malai Paneer              247    ";break;
case 6:ramt+=230;cout<<"\n6         Palak Paneer              230    ";break;
case 7:ramt+=300;cout<<"\n7         Mix Veg.                  300  ";  break;
case 8:ramt+=150;cout<<"\n8         Aaloo Gobi                150    ";break;
case 9:ramt+=140;cout<<"\n9         Chana Masala              140    ";break;
case 10:ramt+=340;cout<<"\n10         Dal Makhani               340    ";break;
case 11:ramt+=105;cout<<"\n11         Pista Badam               105    ";break;
case 12:ramt+=100;cout<<"\n12         Chocolate Lithi           100";   break;
case 13:ramt+=100;cout<<"\n13         Vanilla                   100";  break;
case 14:ramt+=80;cout<<"\n14         Chocolate                 080";   break;
default:ramt+=0;break;
}
}
cout<<"\n\ntotal amount is => "<<ramt;


switch(jhe)
{
case 1:ifstream fip; fip.open("sdrooms.dat",ios::out|ios::in);//
fip.read((char*)&sd,sizeof(rooms));
fip.close();
sd.rmt+=ramt;
ofstream fis;
fis.open("sdrooms.dat",ios::out|ios::in);
fis.write((char*)&sd,sizeof(rooms));
fis.close();break;

case 2:ifstream fiop; fiop.open("drooms.dat",ios::out|ios::in);//
fiop.read((char*)&sd,sizeof(rooms));
fiop.close();
sd.rmt+=ramt;
ofstream fion;
fion.open("drooms.dat",ios::out|ios::in);
fion.write((char*)&sd,sizeof(rooms));
fion.close();break;

case 3:ifstream finm; finm.open("grooms.dat",ios::out|ios::in);//
finm.read((char*)&sd,sizeof(rooms));
finm.close();
sd.rmt+=ramt;
ofstream fia;
fia.open("grooms.dat",ios::out|ios::in);
fia.write((char*)&sd,sizeof(rooms));
fia.close();break;

case 4:ifstream fiaz; fiaz.open("crooms.dat",ios::out|ios::in);//
fiaz.read((char*)&sd,sizeof(rooms));
fiaz.close();
sd.rmt+=ramt;
ofstream fiqw;
fiqw.open("crooms.dat",ios::out|ios::in);
fiqw.write((char*)&sd,sizeof(rooms));
fiqw.close();break;

case 5:ifstream fier; fier.open("cdrooms.dat",ios::out|ios::in);//
fier.read((char*)&sd,sizeof(rooms));
fier.close();
sd.rmt+=ramt;
ofstream fiy;
fiy.open("cdrooms.dat",ios::out|ios::in);
fiy.write((char*)&sd,sizeof(rooms));
fiy.close();break;
default:;break;
}
cout<<"\nEnter 'u' to go back";
char v;
cin>>v;
if(v=='u')
goto start;
break;
//Main case default+++++++++++++++++++++++++++++++++++++++
default:cout<<" thank You";break;
}

getch();
clrscr();
}