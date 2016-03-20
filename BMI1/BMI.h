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

	//accesor functions 
	string getName();
	//rreturns patients name
	int getHeight();
	//RETUNS height of patients
	double getWeight();
	//returns weight of patients

	//mutator functions
	void setName(string);
	//sets patients name
	void setHeight(int);
	//sets patients height 
	void setWeight(double);
	//sets patients weight
private:
	//MEMBER VARIABLES
	string newname;
	int newheight;
	double newweight;

};
#endif BMI_H // !BMI_H

