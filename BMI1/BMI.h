#include<iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_h

class BMI{
public:
	//DEFAULT CONSTRUCTOR
	BMI();
	//overload constructor
	BMI(string, int, double);

	//destructor
	~BMI();
private:
	//MEMBER VARIABLES
	string newname;
	int newheight;
	double newweight;

};
#endif BMI_H // !BMI_H

