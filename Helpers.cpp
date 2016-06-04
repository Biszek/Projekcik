#include "Prusy.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "Yot.h"
#include "Helpers.h"
#include <time.h>
#include <unistd.h>

#define HIT_INTERVAL 100000

using namespace std;


bool are_you_religious_pru(Missionaries a, Prussians b)
{
	return (a.spirit>b.spirit)?true:false;
}


bool duel(Missionaries a, Prussians b)
{
	int c=a.hp;
	int d=b.hp;

	while(c>0 && d>0)
	{
		c=c-(d/8 -c/100 )*(rand()%2);
		d=d-(c/8 -d/100 )*(rand()%2);
	
		c=(c<0)?0:c;
		d=(d<0)?0:d;

		usleep(HIT_INTERVAL);

		cout<<endl<<"Zycie Misjonarza "<<c<<endl;
		cout<<"Zycie Prusaka "<<d<<endl;
	}

	return (c>0)?true:false;
}

bool speed(Missionaries a, Yotvingians b)
{
	return (a.dexterity>b.escape)?true:false;
}

bool are_you_religious_yot(Missionaries a, Yotvingians b)
{
	return (a.spirit>b.spirit)?true:false;
}