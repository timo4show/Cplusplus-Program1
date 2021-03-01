/*TIMOTHY S FAJUYIGBE
01/23/2021 */
#include <iostream>
#include <ctime>
#include <unistd.h>
#include <conio.h>
#include "ClockProg.h"

extern time_t currentTimeSec;

int main()
{
	currentTimeSec = time(0);
  	while(1)
  	{
    	system("cls");
    	printClock(&currentTimeSec);
    	if(_kbhit())
    	{
    		printMenu();
		}
		sleep(1);
    	add1Sec();
  	}
}
