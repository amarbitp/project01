#include<fstream>
#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{

	string line;
	ofstream write;
	ifstream read;
    mainmenu:
	int regn;
	system("cls");

	cout<<"\n\t\t\tWelcome to GYM Management System";
	cout<<"\n\t\t************************************************";
	cout<<"\n";
cout<<"****************************************************************************"<<endl;
	cout<<"*                                                                          *"<<endl;
	cout<<"*                                                                          *"<<endl;
	cout<<"*             *************************************************            *"<<endl;
	cout<<"*             *                                               *            *"<<endl;
	cout<<"*             *                 Project By:                   *            *"<<endl;
	cout<<"*             *                 Amar Kumar                    *            *"<<endl;
	cout<<"*             *                                               *            *"<<endl;
	cout<<"*             *                                               *            *"<<endl;
	cout<<"*             *                                               *            *"<<endl;
	cout<<"*             *                                               *            *"<<endl;
	cout<<"*             *                                               *            *"<<endl;
	cout<<"*             *************************************************            *"<<endl;
	cout<<"*                                                                          *"<<endl;
	cout<<"*                                                                          *"<<endl;
	cout<<"****************************************************************************"<<endl;

	getch();
	system("cls");

	cout<<"\n\n\n\t\t\tPress 1 for Registration.\n";
	cout<<"\n\t\t\tPress 2 for Attendance Portal.\n";
	cout<<"\n\t\t\tPress 3 for Fee Portal.\n";
	cout<<"\n\t\t\tPress 4 for View Gym Data.\n";
	cout<<"\n\t\t\tPress 5 for Exercise Schedule.\n";
	cout<<"\n\t\t\tPress 6 for Exit.\n\n\n\t\t\t";

	char input1;
	char option[5],contact[15],month[10],amount[10],name[12],name3[12],name2[12];
 	char address[55];
	cin>>input1;

	if (input1 < 1 || input1 > 6)
    {
    	cout << "\t\t\tWrong Input..";
	}

	switch(input1)
	{
	case '1':
    system("cls");

	cout<<"\n\n\t\t\t   Register New User:\n";

	cout<<"\t\t\t***********************\n";

	write.open("member.txt",ios::app);

	cout<<"\t\t\tEnter Name: ";
	cin.ignore();
	cin.getline(name, 12);

	cout<<"\n\t\t\tGender (M or F): ";
	char male;
	cin>>male;

	if(male == 'M' || male == 'F');
	else
	{
		cout<<"\t\t\tWrong Input..";

		cout<<"\n\n\n\t\t\tPress any key to return main screen: ";
  	    getch();
		goto mainmenu;
	}
    cout<<"\n\t\t\tConatct: ";
    cin>>contact;

	cout<<"\n\t\t\tAddress: ";
	cin.ignore();
	cin.getline(address, 55);

	write<<name<<"\n"<<male<<"\n"<<contact<<"\n"<<address<<"\n";

	write.close();

	cout<<"\n\t\t\tPress any key to return main screen: ";
    getch();

	goto mainmenu;

	case '2':
	system("cls");

	cout<<"\n\n\t\t\t   Attendance for Today:\n";

	cout<<"\t\t\t****************************\n";

	cout<<"\n\n\n\t\t\tName of trainee: ";
	cin.ignore();
	cin.getline(name2, 12);
	cout<<"\n\n\n\n\t\t\t"<<name2<<" has marked attendance sucessfully !\n\n";

	cout<<"\n\n\n\n\t\tPress any key to return main screen: ";
    getch();

	goto mainmenu;

    case '3':
	system("cls");

	cout<<"\n\n\t\t\t   Fee Portal:\n";
    cout<<"\t\t\t***********************\n";
	cout<<"\n\n\n\t\t\tPress 1 to Submit Fee.";
	cout<<"\n\t\t\tPress 2 to View Pending Fee.";
	cout<<"\n\t\t\tPress 3 to View Paid Fee\n\t\t\t";
    cin>>option;

		if(*option=='1')
		{
			system("cls");
			write.open("fee.txt", ios::app);

			cout<<"\n\t\t\tName of the Trainee :";
    		cin.ignore();
    		cin.getline(name, 12);
			cout<<"\n\t\t\tFee of Month :";
    		cin>>month;

			cout<<"\n\t\t\tAmount :";
    		cin>>amount;

			write<<name<<"\t"<<month<<"\t"<<amount<<"\n";
			write.close();

			cout<<"\n\n\n********************   Payment Successful!  ****"
				  "*****************\n";
    	}
    	else
			if(*option=='2')
		{
    		cout<<"\n\t\t\tAll trainees have done their payments!";
    	}
    	else
			if(*option=='3')
    	{
    		system("cls");
			read.open("fee.txt");
    		while(!read.eof())
    		{
	    		getline(read,line);
    			cout<<line<<endl;
			}
				read.close();
				cout<<endl;
		}

	cout<<"\n\n\n\t\t\tPress any key to return main screen: ";
    getch();
	goto mainmenu;

	case '4':
    system("cls");
    read.open("member.txt");
    while(!read.eof())
    {
    	getline(read,line);
    	cout<<line<<endl;
	}
	read.close();
	cout<<endl;

	cout<<"\n\n\n\t\t\tPress any key to return main screen: ";
    getch();
	goto mainmenu;

	case '5':
	system("cls");

	cout<<"\n\n\t\t\t   Exercise Schedule:\n";
    cout<<"\t\t\t***********************\n";

	cout<<"\n\n\t\t\tMonday: Chest";
	cout<<"\n\n\t\t\tTuesday: Biceps";
	cout<<"\n\n\t\t\tWednesday: Triceps";
	cout<<"\n\n\t\t\tThursday: Back";
	cout<<"\n\n\t\t\tFriday: Leg";
	cout<<"\n\n\t\t\tSaturday: Shoulder";
	cout<<"\n\n\n\t\t\tPress any key to return main screen: ";
    getch();

	goto mainmenu;

	case '6':
	system("cls");
	cout<<"\n\n\n\n\t\t\tProgram Terminated..\n\n\n\n";
    exit(1);

	default :
    cout<<"\n\t\t\tPlease press key from 1 to 6.";
	}
    getch();

    return 0;
}
