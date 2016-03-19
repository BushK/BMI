#include<iostream>
#include <string>
#include "BMI.h"
using namespace std;

int main(){
	string name;
	int height;
	double weight;

	cout << "Enter Name:";
	cin >> name;
	cout << "Enter height(in inches):";
	cin >> height;
	cout << "Enter weight:";
	cin >> weight;
	BMI Student_1(name, height, weight);

	return 0;
}

