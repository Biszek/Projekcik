#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "Miss.h"
#include "Yot.h"
#include "Helpers.h"

using namespace std;

class Prussians;
class Calendar;
class Yotvingians;

class Missionaries;




class Prussians
{
	string imie;	
	int spirit,fight, defense,aggression,level,victory,hp;

public:
	friend bool are_you_religious_pru(Missionaries a, Prussians b);
	friend bool duel(Missionaries a, Prussians b);
	Prussians();
	bool fight_or_not_fight();
	void show();
	void level_up();
	void have_a_level();
};
