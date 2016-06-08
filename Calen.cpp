#include "Prusy.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "Calen.h"
#include "Helpers.h"

using namespace std;

vector<Calendar> vec_calendar;

void create_calendar()
{
	fstream kal;
	string a,b,d,e,f;
	int i=-1;

	string month[]={"Styczen","Luty","Marzec","Kwiecien","Maj",
	"Czerwiec","Lipiec","Sierpien","Wrzesien","Pazdziernik", "Listopad",
	"Gruday"};
	string name4[4];
	
	kal.open("Kalendarz.txt", std::ios::in | std::ios::out );

	while(!kal.eof())
 	{
 		getline(kal,b);
 		getline(kal,a);

 		for(int j=0;j<4;j++)
 		name4[j]="";

 		for(int j=0;j<int(a[0])-48;j++)
 		{
 		getline(kal,d);
 		name4[j]=d;
 		}
 		
 		if(b =="1")
 		i++;

 		
   vec_calendar.push_back(Calendar(name4[0],name4[1],name4[2],name4[3],b,month[i]));
 
 	}	

 	kal.close();

}

void day(int a)
{
	cout<<vec_calendar[a].date<<" ";
	cout<<vec_calendar[a].month<<endl;

	cout<<"Imieniny obchodza "<<endl;
	cout<<vec_calendar[a].name1<<", " ;
	cout<<vec_calendar[a].name2<<", ";
	cout<<vec_calendar[a].name3<<", ";
	cout<<vec_calendar[a].name4<<endl;
}

bool is_your_name_day(Missionaries a, int b)
{
 return	(vec_calendar[b].name1==a.imie||vec_calendar[b].name2==a.imie||
 vec_calendar[b].name3==a.imie||vec_calendar[b].name4==a.imie)?true:false;
}