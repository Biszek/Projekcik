#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "Miss.h"
#include "Prusy.h"
#include "Helpers.h"

class Missionaries;


using namespace std;

class Yotvingians
{
	string imie;
	int spirit, escape,sexappeal, level, victory,hp;

 public:
 	Yotvingians();
 	friend bool speed(Missionaries a, Yotvingians b);
 	friend bool are_you_religious_yot(Missionaries a, Yotvingians b);
 	bool have_a_sex();
 	void show();
 	void level_up();
 	void have_a_level();
};