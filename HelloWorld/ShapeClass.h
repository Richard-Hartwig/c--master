#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>





class Shape{
	public:
		Shape() { // default
			lengthPv = 0;
			widthPv = 0;
			radiusPV = 0;
			basePV = 0;
			TrapeziumTopPV = 0 ;
			TrapeziumBottomPV = 0;
			heightPV = 0;
		}
		
		void SetLenght() {
			int length = 0;
		}
		void SetWidth() {
			int width = 0;
		}
		void SetRadius() {
			int radius = 0;
		}
		void SetBase() {
			 int base;
		}
		void SetTrapeziumTop() {
			int TrapeziumTop;
		}
		void SetTrapeziumBottom() {
			int TrapeziumBottom;
		}
		void Setheight() {
			int height;
		}

		double GetRadius(double radius) {
			radius = radiusPV;
		}
		int GetLength(int length) {
			length = lengthPv;
		}
		int GetWidth(int Width) {
			Width = widthPv;
		}
		int GetBase(int base) {
			base = basePV;
		}
		int GetTrapeziumTop(int TrapeziumTop) {
			TrapeziumTop = TrapeziumTopPV;
		}
		int GetTrapeziumBottom(int TrapeziumBottom) {
			TrapeziumBottom = TrapeziumBottomPV;
		}
		int Getheight(int height) {
			height = heightPV;
		}

private:
	int lengthPv;
	int widthPv;
	double radiusPV;
	int basePV;
	int TrapeziumTopPV;
	int TrapeziumBottomPV;
	int heightPV;
};

class Rectangle : public Shape {
public:
	
	int GetAreaRect( int w, int l) {
		return (w * l);
	}
	int GetPerimeter(int w, int l) {
		return (2 * l + 2 * w);
	}

};

class Circle : public Shape {
public:

	double GetArea(double radius) {
		return (pow(radius,2) * M_PI);
	}
	double GetPerimeter(double radius) {
		return (2 * M_PI*radius);
	}
};

class Sector : public Shape {
public:
	double GetArea(double radius) {
		return (pow(radius, 2) * M_PI);
	}
	double GetPerimeter(double radius, double angle) {
		return (2 * M_PI + (radius*angle)*(M_PI / 360));
	}

};

class Triangle : public Shape {
public:
	double GetArea(int base,int height ) {
		return (0.5*base*height);
	}

	int GetPerimeter(int side1, int side2, int side3) {
		return (side1 + side2 + side3);
	}

};

class Square : public Shape{
public:
	int GetArea(int length) {
		return (pow(length, 2));
	}
	int GetPerimeter(int length) {
		return (4 * length);
	}
};
class Trapezoid : public Shape {
public:
	double getArea(double base, double side1, double height) {
		return ((base + side1)*(height / 2));
	}
	double getPerimeter(double base, double side1, double side2, double side3) {
		return(base + side1 + side2 + side3);
	}
};