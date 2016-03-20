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
void BMI::setName(string name){
	newname = name;
}
void BMI::setHeight(int height){
newheight = height;
}
void BMI::setWeight(double weight){
	newweight = weight;
}
