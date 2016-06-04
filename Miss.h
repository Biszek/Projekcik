#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "Prusy.h"
#include "Yot.h"


using namespace std;

class Prussians;
class Yotvingians;

class Missionaries
{
	string imie;	
	int spirit,dexterity,fight,defense,level,victory,hp;

public:
	friend bool are_you_religious_pru(Missionaries a, Prussians b);
	friend bool is_your_name_day(Missionaries a, int b);
	friend bool speed(Missionaries a, Yotvingians b);
	friend bool duel(Missionaries a, Prussians b);
	friend bool are_you_religious_yot(Missionaries a, Yotvingians b);
	Missionaries();
	void show();
	void buff();
	void debuff();
	void level_up();
	void have_a_level();
};