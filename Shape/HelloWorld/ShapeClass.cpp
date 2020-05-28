#include <iostream>
#include "ShapeClass.h"

using namespace std;


Shape::Shape() { // default
	lengthPv = 0;
	widthPv = 0;
	radiusPV = 0;
	basePV = 0;
	TrapeziumTopPV = 0;
	TrapeziumBottomPV = 0;
	heightPV = 0;
}

Shape::~Shape() //deconstructor
{
}


//Rectangle
int Rectangle::GetAreaRect(int w, int l) {
	return (w * l);
}
int Rectangle::GetPerimeter(int w, int l) {
	return (2 * l + 2 * w);
}

//Circle

double Circle::GetArea(double radius) {
	return (pow(radius, 2) * M_PI);
}
double Circle::GetPerimeter(double radius) {
	return (2 * M_PI*radius);
}

//Sector
double Sector::GetArea(double radius) {
	return (pow(radius, 2) * M_PI);
}
double Sector::GetPerimeter(double radius, double angle) {
	return (2 * M_PI + (radius*angle)*(M_PI / 360));
}

//Triangle
double Triangle::GetArea(int base, int height) {
	return (0.5*base*height);
}

int Triangle::GetPerimeter(int side1, int side2, int side3) {
	return (side1 + side2 + side3);
}

//Square
int Square::GetArea(int length) {
	return (pow(length, 2));
}
int Square::GetPerimeter(int length) {
	return (4 * length);
}


double Trapezoid::getArea(double base, double side1, double height) {
	return ((base + side1)*(height / 2));
}
double Trapezoid::getPerimeter(double base, double side1, double side2, double side3) {
	return(base + side1 + side2 + side3);
}



