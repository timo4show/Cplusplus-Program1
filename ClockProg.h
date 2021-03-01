#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <unistd.h>
#include <conio.h>
using namespace std;
time_t currentTimeSec;

void printClock(time_t *currentTimeSec)
{
    tm *timeStruct = localtime(currentTimeSec);
    int hour = timeStruct->tm_hour;
    int min = timeStruct->tm_min;
    int sec = timeStruct->tm_sec;
    int hrIn12 = 12;
    if(timeStruct->tm_hour > 12)
    	hrIn12 = timeStruct->tm_hour % 12;
	cout << setfill('*') << setw(26) << "" << "    " << setw(26) << "" << endl;
    cout << "*      12-Hour Clock     *    *      24-Hour Clock     *"<<endl<<endl; 
    cout<<"*      "<<setfill('0') << setw(2)<<hrIn12<<":"<<setfill('0') << setw(2)<<min<<":"<<setfill('0') << setw(2)<<sec;
    if(hrIn12 == hour)
    	cout<<" A M";
  	else
    	cout<<" P M";
  	cout<<"      *    ";
  	cout<<"*        "<<setfill('0') << setw(2)<<hour<<":"<<setfill('0') << setw(2)<<min<<":"<<setfill('0') << setw(2)<<sec<<"        *\n";

    cout << setfill('*') << setw(26) << "" << "    " << setw(26) << "" << endl;
} 

void add1Hr()
{
	currentTimeSec += 3600;
}

void add1Min()
{
	currentTimeSec += 60;
}

void add1Sec()
{
	currentTimeSec++;
}
void printMenu()
{
	cout << setw(27) << setfill('*') << "" << endl;
    cout << "* 1 -- Add One Hour" << setfill(' ') << setw(8) << '*' << endl;
    cout << "* 2 -- Add One Minute" << setw(6) << '*' << endl;
    cout << "* 3 -- Add One Second" << setw(6) << '*' << endl;
    cout << "* 4 -- Exit Program" << setw(8) << '*' << endl;
    cout << setw(27) << setfill('*') << "" << endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
    	case 1: add1Hr();break;
		case 2: add1Min();break;
		case 3: add1Sec();break;
		case 4: exit(0);		
	}
}
