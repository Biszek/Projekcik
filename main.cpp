#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <fstream>
#include "Prusy.h"
#include <vector>
#include "Miss.h"


using namespace std;

#define HIT_INTERVAL 100000


int main(int argc, char const *argv[])
{
	create_prus_names();
	create_missio_names();
	create_yot_names();
	create_calendar();
	srand(time(NULL));


	Missionaries misjo[10];
	vector<Missionaries > vmisjo;
	
	Prussians pru[300];
	vector<Prussians> vpru;

	Yotvingians jadz[100];
	vector<Yotvingians> vjadz;

	for(int i=0;i<10;i++)
	vmisjo.push_back(misjo[i]);

	for(int i=0;i<300;i++)
	vpru.push_back(pru[i]);

	for(int i=0;i<100;i++)
	vjadz.push_back(jadz[i]);

	int k=0,m=5,h=5;
	

	while(true)
	{

	if(k>=365)
	{
		cout<<"KONIEC CZASU!!!"<<endl;
		break;
	}

	cout<<endl<<"STAN WALK"<<endl;
	cout<<"Misjonarze | Prusowie | Jacwingowie"<<endl;
	cout<<"    "<<vmisjo.size()<<"           "<<vpru.size()<<"          "
	<<vjadz.size()<<endl<<endl;
	usleep(HIT_INTERVAL);

	k++;
	cout<<"A.D.960 "<<endl;
	day(k);
	cout<<endl;

	for(int i=0;i<3;i++)
	{
	if(vpru.size()!=0)
	{
	int x=rand()%vmisjo.size();
	int y=rand()%vpru.size();



	if(is_your_name_day(vmisjo[x],k)==1)
	vmisjo[x].buff();

	vmisjo[x].show();
	vpru[y].show();
	cout<<endl;

	if(are_you_religious_pru(vmisjo[x],vpru[y])==1)
		{
			cout<<"Schrystjanizowany"<<endl;
			vpru.erase(vpru.begin()+y);
			vmisjo[x].have_a_level();
		}
	else if(vpru[y].fight_or_not_fight()==1)
		{
			cout<<endl<<"WALKA"<<endl;
			if(duel(vmisjo[x],vpru[y])==1)
			{
				vpru[y].show();
				vpru.erase(vpru.begin()+y);
				cout<<"NIE ZYJE"<<endl;
				vmisjo[x].have_a_level();
			}
			else
			{
				vmisjo[x].show();
				vmisjo.erase(vmisjo.begin()+x);
				cout<<"NIE ZYJE"<<endl;
				vpru[y].have_a_level();
			}
		}
	else
			{
				cout<<"Prusak odchodzi w pokoju"<<endl;
				vpru[y].have_a_level();
			}	


		if(is_your_name_day(vmisjo[x],k)==1)
		vmisjo[x].debuff();

		if(vmisjo.size()==0)
		{
		cout<<"WSZYSCY MISJONARZE NIE ZYJA"<<endl;
		break;
		}
	
		cout<<endl;
		usleep(HIT_INTERVAL);
	}
	else
		h=0;

	}
	

	if(vmisjo.size()==0)
	break;
		



	if(vjadz.size()!=0)
	{
		int x=rand()%vmisjo.size();
		int z=rand()%vjadz.size();
	
		vmisjo[x].show();
		vjadz[z].show();
		cout<<endl;

		if(is_your_name_day(vmisjo[x],k)==1)
			vmisjo[x].buff();

		if(are_you_religious_yot(vmisjo[x],vjadz[z])==1)
		{
			cout<<"Schrystjanizowany"<<endl;
			vjadz.erase(vjadz.begin()+z);
			vmisjo[x].have_a_level();
		}
		else
		{
			if(speed(vmisjo[x],vjadz[z])==1)
				{
					cout<<"Jadzwing zginal w czasie ucieczki"<<endl;
					vjadz.erase(vjadz.begin()+z);
					vmisjo[x].have_a_level();
				}
		

			else if (vjadz[z].have_a_sex()==1)
				{
					Yotvingians f;
					vjadz.push_back(f);
					cout<<"Jadzwing sie rozmnozyl"<<endl;
					vjadz[z].have_a_level();
				}
			else
				{
				cout<<"Uciekl"<<endl;
				vjadz[z].have_a_level();
				}
		}

			if(is_your_name_day(vmisjo[x],k)==1)
			vmisjo[x].debuff();

			cout<<endl;
			usleep(HIT_INTERVAL);
	}
	else
		m=0;



	if(m+h==0)
	{
		cout<<"PRUSY WSCHODNIE ZOSTALY SCHRYSTJANIZOWANE"<<endl;
		break;
	}

	}



}