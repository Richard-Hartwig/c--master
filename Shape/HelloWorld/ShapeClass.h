#ifndef SHAPE_H
#define SHAPE_H


#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>




class Shape{
	private:
		int lengthPv;
		int widthPv;
		double radiusPV;
		int basePV;
		int TrapeziumTopPV;
		int TrapeziumBottomPV;
		int heightPV;

	public:
		Shape();
		~Shape(); //deconstructor	
};

class Rectangle : public Shape {
public:
	
	int GetAreaRect(int w, int l);
	int GetPerimeter(int w, int l);

};

class Circle : public Shape {
public:

	double GetArea(double radius);
	double GetPerimeter(double radius);
	
};

class Sector : public Shape {
public:
	double GetArea(double radius);
	double GetPerimeter(double radius, double angle);
};

class Triangle : public Shape {
public:
	double GetArea(int base, int height);

	int GetPerimeter(int side1, int side2, int side3);
};

class Square : public Shape{
public:
	int GetArea(int length);
	int GetPerimeter(int length);
};

class Trapezoid : public Shape {
public:
	double getArea(double base, double side1, double height);
	double getPerimeter(double base, double side1, double side2, double side3);
};

#endif // !SHAPE_H
