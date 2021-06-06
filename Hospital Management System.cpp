#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<ctime>
using namespace std;
class Reception
{
	public:
			static int bill;static string name;
	void getinfo( )
	{
	cout<<"==================================================="<<endl;
	string phone ;string address; string age;
	cout<<"Enter the name of patient : ";cin>>name;
	cout<<"Enter the age of patient : ";cin>>age;
	cout<<"Enter the address of patient : ";cin>>address;
	cout<<"Enter the phone of patient : ";cin>>phone;
	cout<<"==================================================="<<endl;
	cout<<"\n\n";

}

	int getproblem()
	{
		char p;
		cout<<"Select Department : 1.Heart  2.Bones  3.Teeth  4.Stomach 5.Emergency: ";cin>>p;
		cout<<endl;
		return p;
	}
};
int Reception::bill=0;
string Reception::name;

class Teeth:public Reception
{
	public:
		int gettreat()
		{
		char t;
		cout<<"Enter Treatment You want to go : 1.Filling 2.Washing 3.teethremoval 4.braces";cin>>t;
		return t;
		}	
		void filling()
		{
				int fillings=5000;int a;
				cout<<"Amount of selected treatmnet is : "<<fillings<<" do you want to accept it ? : 1.Yes, 2.No \n";cin>>a;
				if (a==1)
				{
				bill=bill+fillings ;
			}
			else cout<<"\n\nThanks for coming\n\n";
		}
		void washing()
		{
				int washings = 7000;int a;
				cout<<"Amount of selected treatmnet is : "<<washings<<" do you want to accept it ? : 1.Yes, 2.No \n";cin>>a;
				if (a==1)
				{
				bill=bill+washings;
			}
			else cout<<"\n\nThanks for coming\n\n";
		}
		void teethremoval()
		{
				int teethremovals = 5000;int a;
				cout<<"Amount of selected treatmnet is : "<<teethremovals<<" do you want to accept it ? : 1.Yes, 2.No \n";cin>>a;
				if (a==1)
				{
				bill=bill+teethremovals;
			}
			else cout<<"\n\nThanks for Coming\n\n";
		}
		void braces()
		{
				int brace = 35000;int a;
				cout<<"Amount of selected treatmnet is : "<<brace<<" do you want to accept it ? : 1.Yes, 2.No \n";cin>>a;
				if (a==1)
				{
				bill=bill+brace;
			}
			else cout<<"\n\nThanks for Coming\n\n";
		}
};
class Heart:public Reception
{public:
	
	char c;
	int gettreats()
    {
    	
	cout<<"Select what you want to do : "; 
	cout<<"1:FOR BYPASS  ";
	cout<<"2:FOR ECG  ";
	cin>>c;
	return c;
}

	void bypass()
	{ ///cout<<"WELLCOME TO THE BYPASS SECTION";
		int bypss=250000,a;
		cout<<"AMOUNT OF BYPASS IS :"<<bypss<<"DO YOU AGREE 1: YES , 2: NO ";cin>>a;
		if(a==1)
		{
		bill=bill+bypss;
		}
		else
		cout<<"THANKS FOR COMING";
}
 void ecg()
    { ///cout<<"WELLCOME TO THE ECG SECTION";
     	int cg=5000,b;
	    cout<<"AMOUNT OF ECG IS :"<<cg<<"DO YOU AGREE 1: YES , 2: NO ";cin>>b;
	    if(b==1){
		bill=bill+cg;}
		else
		cout<<"THANKS FOR COMING";
}};
class Bones:public Reception
{
	public:
		char s;
	int bone()
   {
   	cout<<"Select what you want to do :"; 
	cout<<"1:FOR FACTURE";
	cout<<"2:FOR BONE BREAK";
	cout<<"3:FOR BONE MARROW PLANT";cin>>s;return s;}
	
	void facture()
	{ //cout<<"WELLCOME TO THE FACTURE SECTION";
		int factre=7000,a;
		cout<<"AMOUNT OF FACTURE IS :"<<factre<<"DO YOU AGREE 1: YES , 2: NO ";cin>>a;
		if(a==1){
		bill=bill+factre;}
         else
         cout<<"THANKS FOR COMING";
	}
	 void bonebreak()
    { //cout<<"WELLCOME TO THE BONE BREAK SECTION";
     	int b=12000,c;
	cout<<"AMOUNT OF BONE BREAK IS :"<<b<<"DO YOU AGREE 1: YES , 2: NO ";cin>>c;
     	if(c==1){
		 bill=bill+b;}
    else
    cout<<"THANKS FOR COMING";
	}

 void bone_marrow_plant()
	{ //cout<<"WELLCOME TO THE BONE MARROW PLANT SECTION";
		int bne=5000000,d;
		cout<<"AMOUNT OF BONE MARROW PLANT IS :"<<bne<<"DO YOU AGREE 1: YES , 2: NO ";cin>>d;
		if(d==1){
		bill=bill+bne;}
		else
		cout<<"THANKS FOR COMING";
	}};
class stomach:public Reception
{
	public:
		char st;
	int sto(){
	
   cout<<"Select what you want to do :"; 
	cout<<"1:FOR STOMACH CHECKUP";
	cout<<"2:FOR STOMACH WASH";
	cin>>st;return st;}

	void stomach_checkup()
{ //cout<<"WELLCOME TO THE STOMACH CHECKUP";
		int che=1000,a;
		cout<<"AMOUNT OF THIS TREATMENT IS :"<<che<<"DO YOU AGREE 1: YES , 2: NO ";cin>>a;
		if(a==1){
		bill=bill+che;}
         else
         cout<<"THANKS FOR COMING";
}

 void stomach_wash()
    { 
     	int b=3000,c;
	cout<<"AMOUNT OF STOMACH WASH IS :"<<b<<"DO YOU AGREE 1: YES , 2: NO ";cin>>c;
     	if(c==1){
		 bill=bill+b;}
    else
    cout<<"THANKS FOR COMING";
	}
};

int main()
{
	int pat;int f;int heart=0;string l;
	
	fstream list;
	list.open("list.txt",ios::out);
	
	 time_t now = time(0);
   
   char* dt = ctime(&now);

   
	list << "The date and time is when patient came: " << dt << endl;
	
	
		while(f!=-1)
	{
		pat++;
		
	
	char b;char a; int tea=0;char e;char d;string c;
	fstream patient;
	
	patient.open("patient.txt",ios::out);
	
	patient << "The date and time is when patient came: " << dt << endl;
	patient<<"patient number is : "<<pat<<'\n';
	patient<<"patient token number is : "<<pat<<'\n';
	list<<"\n\npatient number is : "<<pat<<'\n';

	Teeth r;
	Heart h;
	Bones on;
	stomach om;
	r.getinfo();
	{
		b=r.getproblem();
	switch(b)
	{
			case '1':
			{
				 heart ++;
				if(heart>20)
				{
					cout<<"Hospital is full"<<endl;
				}
				else
				{
				cout<<"WELCOME TO HEART DEPARTMENT"<<endl;
				e=h.gettreats();
				patient<<"Mr."<<r.name<<" has heart problem\n";
				list<<"Mr."<<r.name<<" has heart problem\n";
				switch (e)
				{
					case '1':
						{
							cout<<"WELCOME TO ByPass SECTION"<<endl<<endl;
							h.bypass();
							patient<<"Mr."<<r.name<<" wants ByPass \n";
							list<<"Mr."<<r.name<<" wants ByPass \n";
							break;
						}
						case '2':
						{
							cout<<"WELCOME TO ECG SECTION"<<endl<<endl;
							h.ecg();
							patient<<"Mr."<<r.name<<" wants ECG \n";
							list<<"Mr."<<r.name<<" wants ECG \n";
							break;
						}		}
			}
			break;
			}
			case '2':
			{
				cout<<"WELCOME TO BONE DEPARTMENT"<<endl;
				d=on.bone();
				patient<<"Mr."<<r.name<<" has bone problem\n";
				list<<"Mr."<<r.name<<" has bone problem\n";
				switch(d)
				{
					case '1':
						{
							cout<<"WELCOME TO FACTURE SECTION"<<endl<<endl;
							on.facture();
							patient<<"Mr."<<r.name<<" wants bone fit \n";
							list<<"Mr."<<r.name<<" wants bone fit \n";
							break;
						}
						case '2':
						{
							cout<<"WELCOME TO BONE BREAK SECTION"<<endl<<endl;
							on.bonebreak();
							patient<<"Mr."<<r.name<<" wants bone join \n";
							list<<"Mr."<<r.name<<" wants bone join \n";
						
							break;
						}
						case '3':
						{
							cout<<"WELCOME TO BONE MARROW PLANT SECTION"<<endl<<endl;
							on.bone_marrow_plant();
							patient<<"Mr."<<r.name<<" wants bone marrow \n";
							list<<"Mr."<<r.name<<" wants bone marrow \n";
							break;
						}
						
				}
				
				break;
			}
			case '3':
			{
				cout<<"WELCOME TO TEETH DEPARTMENT"<<endl;
				a=r.gettreat();
				patient<<"Mr."<<r.name<<" has teeth problem  \n";
				list<<"Mr."<<r.name<<" has teeth problem  \n";
				switch (a)
				{
					case '1':
						{
							cout<<"WELCOME TO FILLING SECTION"<<endl<<endl;
							r.filling();
							patient<<"Mr."<<r.name<<" wants filling \n";
							list<<"Mr."<<r.name<<" wants filling \n";
							break;
						}
						case '2':
						{
							cout<<"WELCOME TO WASHING SECTION"<<endl<<endl;
							r.washing();
							patient<<"Mr."<<r.name<<" wants washing \n";
							list<<"Mr."<<r.name<<" wants washing \n";
							break;
						}
						case '3':
						{
							cout<<"WELCOME TO TEETHREMOVAL SECTION"<<endl<<endl;
							r.teethremoval();
							patient<<"Mr."<<r.name<<" wants teeth removal \n";
							list<<"Mr."<<r.name<<" wants teeth removal \n";
							break;
						}
						case '4':
						{
							cout<<"WELCOME TO BRACES SECTION"<<endl;
							r.braces();
							patient<<"Mr."<<r.name<<" wants braces \n";
							list<<"Mr."<<r.name<<" wants braces \n";
							break;
						}		}   break; }
			case '4':
			{
				cout<<"WELCOME TO STOMACH DEPARTMENT"<<endl;
				d=om.sto();
				patient<<"Mr."<<r.name<<" has stomach problem \n ";
				list<<"Mr."<<r.name<<" has stomach problem \n ";
				switch(d)
				{
						case '1':
						{
							cout<<"WELCOME TO Stomach check up SECTION"<<endl<<endl;
							om.stomach_checkup();
							patient<<"Mr."<<r.name<<" wants stomach checkup \n";
							list<<"Mr."<<r.name<<" wants stomach checkup \n";
							break;
						}
						case '2':
						{
							cout<<"WELCOME TO Stomach Wash SECTION"<<endl;
							om.stomach_wash();
							patient<<"Mr."<<r.name<<" wants stomach wash \n";
							list<<"Mr."<<r.name<<" wants stomach wash \n";
							break;
						}	}	 
				break;		
				}
				case '5':
					{
						
					}
				
			}
}
	
	cout<<"Your bill is : "<<r.bill;
	patient<<r.name<<"`s bill is : "<<r.bill;
	list<<r.name<<"`s bill is : "<<r.bill;
	getch();
	patient.close();
	list.close();
	system("cls");
	patient.open("patient.txt");
	while(getline(patient,c))
	{
		cout<<c<<'\n';
	}
	
	getch();
	system("cls");
	r.bill=0;
	cout<<"Do you want to enter more patients ? 1.Yes   -1.No	";cin>>f;}
	system("cls");
	cout<<"List of total patients came today is ::::\n\n\n\n\n";
	list.open("list.txt");
	while(getline(list,l))
	{
		cout<<l<<'\n';
	}
	getch();
}
