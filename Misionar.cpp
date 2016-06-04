#include "Prusy.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "Miss.h"
#include "Helpers.h"

using namespace std;

vector <string> missionaries_name;

void create_missio_names()
{
 string a;
 fstream mis;
 mis.open( "mis.txt", std::ios::in | std::ios::out );

 	while(!mis.eof())
 	{
 		getline(mis,a);
 		missionaries_name.push_back(a);
 	}
  mis.close(); 
  }


Missionaries::Missionaries()
{

	spirit=rand()%81;
	dexterity=rand()%30;
	fight=rand()%71+10;
	defense=rand()%71+30;
	imie= missionaries_name[rand()%10];
	hp=100;
	level=1;
	victory=0;
}

void Missionaries::level_up()
{
	spirit=spirit+spirit/20;
	dexterity=dexterity+dexterity/20;;
	fight=fight+fight/20;
	defense=defense+defense/20;
	level++;
}


void Missionaries::show()
{
	cout<<imie<<"(lvl "<<level<<")  -  ";
}

void Missionaries::have_a_level()
{
	victory++;
	if(victory%30==0)
	level_up();
}

void Missionaries::buff()
{
	spirit+=100;
	dexterity+=100;
	fight+=100;
	defense+=100;
	
}

void Missionaries::debuff()
{
	spirit-=100;
	dexterity-=100;
	fight-=100;
	defense-=100;
}