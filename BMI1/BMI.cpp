#include "BMI.h"

BMI::BMI(){
	newheight = 0;
	newweight = 0;
}
BMI::BMI(string name, int height, double weight){
	newname = name;
	newheight = height;
	newweight = weight;
}
BMI::~BMI(){

}
string BMI::getName(){
	return newname;
}
int BMI::getHeight(){
	return newheight;
}
double BMI::getWeight(){
	return newweight;
}