#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "Miss.h"
#include "Yot.h"
#include "Prusy.h"

using namespace std;

class Missionaries;
class Prussians;
class Yotvingians;

void create_prus_names();
void create_missio_names();
void create_yot_names();
bool are_you_religious_pru(Missionaries a, Prussians b);
void create_calendar();
void day(int);
bool is_your_name_day(Missionaries a, int b);
bool duel(Missionaries a, Prussians b);
bool speed(Missionaries a, Yotvingians b);
bool are_you_religious_yot(Missionaries a, Yotvingians b);