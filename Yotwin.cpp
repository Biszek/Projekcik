#include "Prusy.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "Yot.h"
#include "Helpers.h"


using namespace std;

vector <string> yot_name;

void create_yot_names()
{
 fstream yot;
 string a;	

   yot.open( "imionap.txt", std::ios::in | std::ios::out );

 	while(!yot.eof())
 	{
 		getline(yot,a);
 		yot_name.push_back(a);
 	}
  yot.close(); 
}



Yotvingians::Yotvingians()
{
	spirit=rand()%71;
	escape=rand()%76+30;
	sexappeal=rand()%81+30;
	imie=yot_name[rand()%2461];
	hp=100;
	level=1;
	victory=0;
}

void Yotvingians::show()
{
	cout<<imie<<"(lvl "<<level<<")";
}

void Yotvingians::level_up()
{
	spirit= spirit + spirit/8;
	escape=escape+escape/8;
	sexappeal=sexappeal+sexappeal/8;	
	level++;
}

void Yotvingians::have_a_level()
{
	victory++;
	level_up();
}

bool Yotvingians::have_a_sex()
{
	return (sexappeal>50)?true:false;
}
