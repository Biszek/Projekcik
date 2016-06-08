#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "Miss.h"


using namespace std;



class Calendar
 {
 	public:
 	string name1;
 	string name2;
 	string name3;
 	string name4;
 	string date;
 	string month;	
 
 	Calendar(string xname1, string xname2, string xname3, string xname4, string xdate, string xmonth)
 	{
 		name1=xname1;
 		name2=xname2;
 		name3=xname3;
 		name4=xname4;
 		date=xdate;
 		month=xmonth;
 	}

 }; 