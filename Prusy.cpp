#include "Prusy.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

vector<string> prussians_name;

void create_prus_names()
{
 fstream prus;
 string a;	

   prus.open( "imionap.txt", std::ios::in | std::ios::out );

 	while(!prus.eof())
 	{
 		getline(prus,a);
 		prussians_name.push_back(a);
 	}
  prus.close(); 
}



Prussians::Prussians()
{
	spirit=rand()%71;
	fight=rand()%51+50;
	defense=rand()%41+20;
	aggression=rand()%76;
	imie=prussians_name[rand()%2461];
	hp=100;
	level=1;
	victory=0;
}

void Prussians::show()
{
	cout<<imie<<"(lvl "<<level<<")";
}

void Prussians::level_up()
{
	spirit=spirit+spirit/8;
	fight=fight+fight/8;
	defense=defense+defense/8;
	aggression=aggression+aggression/8;
	level++;
}

void Prussians::have_a_level()
{
	victory++;
	level_up();
}

bool Prussians::fight_or_not_fight()
{
	return(aggression>50)?true:false;
}
