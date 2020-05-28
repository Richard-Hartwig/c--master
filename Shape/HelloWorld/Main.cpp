

#include "ShapeClass.h";
#include <iomanip>;
#include <iostream>;


using namespace std;

int doShape(int ch); 
void menu();
void cinClear();
double checkIfPositive(double input);

int main() {


	cout << "I can find the area and perimeter of a shape.\n\nWhich shape would you like to find?\n\nI can only compute positive numbers.\n\n";
	menu();

	int ch;
	
	

	while (!(cin >> ch) || ch > 6 || ch < 1) {
		cinClear();
		cout << "Invalid choice\n";
	}

	doShape(ch);
				
	cout << "\nDo you want to try another?\n\nPress 'Y' or 'N'\n";
	char cAnotherOne = NULL;	

	while (cAnotherOne != 'y' || cAnotherOne != 'Y' || cAnotherOne != 'N' || cAnotherOne != 'n') {
		cinClear();
		cin >> cAnotherOne;
		
		if (cAnotherOne == 'y' || cAnotherOne == 'Y' || cAnotherOne == 'n' || cAnotherOne == 'N'){
			break;
		}
		cout << "That is an invalid choice.\n";
	}
	char cMenu = NULL;
	
	while (cAnotherOne == 'y' || cAnotherOne =='Y') {
		system("cls");
		cout << "Do you want to see what shapes we offer? Press 'Y' or 'N'\n \n";


		while (cMenu != 'y' || cMenu != 'Y' || cMenu != 'N' || cMenu != 'n') {
			cinClear();
			cin >> cMenu;

			if (cMenu == 'y' || cMenu == 'Y' || cMenu == 'n' || cMenu == 'N') {
				break;
			}
			cout << "That is an invalid choice.\n";
		}
		

		
		if (cMenu == 'Y' || cMenu =='y') {
			system("cls");
			menu();
			
			while (!(cin >> ch) || ch > 6 || ch < 1) {
				cinClear();
				cout << "Please enter a number between 1 and 6\n";
			}
			doShape(ch);
				
		}	
		else {
			system("cls");
			cout << "Please enter a number between 1 and 6\n";
			
			while (!(cin >> ch) || ch > 6 || ch < 1) {				
				cinClear();
			}
			doShape(ch);
				
		}
		
		cout << "\nDo you want to try another?\n\nPress 'Y'\n";
		cin >> cAnotherOne;
	}
	
		cout << "Thank you for using Shapes\n\n";

	
	//system("Pause");
	return 0;	
}

int doShape(int ch) {

	Rectangle rectangle;
	Circle circle;
	Sector sector;
	Triangle triangle;
	Trapezoid trapazoid;
	Square square;
	double radius, angle, input;
	int length, width, base, height, ShapeSide1, ShapeSide2, ShapeSide3;

	

	switch (ch)
	{

	case 1: // Rectangle

		cout << "Enter the width for the Rectangle.\n";
		cin >> input;
		width =checkIfPositive(input);

		cout << "Enter the length for the Rectangle.\n";
		cin >> input;
		length = checkIfPositive(input);

		cout << "The area of the Rectangle is " << rectangle.GetAreaRect(width, length) << endl;
		cout << "The perimeter of the Rectangle is " << rectangle.GetPerimeter(width, length) << endl;
		break;


	case 2: // circle

		cout << "Enter the radius for the circle.\n";
		cin >> input;
		radius = checkIfPositive(input);

		cout << "The perimeter of the circle " << circle.GetPerimeter(radius) << endl;
		cout << "The area of the circle is " << circle.GetArea(radius) << endl;

		break;

	case 3:// sector

		cout << "Enter the radius for the sector.\n";
		cin >> input;
		radius = checkIfPositive(input);

		cout << "Enter the angle of the sector.\n";
		cin >> input;
		angle = checkIfPositive(input);

		cout << "\nThe area of the sector is " << sector.GetArea(radius) << endl;
		cout << "The perimeter of the sector is " << sector.GetPerimeter(radius, angle) << endl;
		break;

	case 4:// triangle
		cout << "Enter the base for the triangle.\n";
		cin >> input;
		base = checkIfPositive(input);

		cout << "Enter the height for the triangle.\n";
		cin >> input;
		height = checkIfPositive(input);

		cout << "Enter side 1\n";
		cin >> input;
		ShapeSide1 = checkIfPositive(input);

		cout << "Enter side 2\n";
		cin >> input;
		ShapeSide2= checkIfPositive(input);

		cout << "The area of the triangle is " << triangle.GetArea(base, height) << endl;
		cout << "The perimeter of the triangle is " << triangle.GetPerimeter(ShapeSide1, ShapeSide2, base) << endl;
		break;

	case 5: // Trapezoid
		cout << "Enter the base for the trapazoid\n";
		cin >> input;
		base= checkIfPositive(input);

		cout << "Enter the first side for the trapazoid\n";
		cin >> input;
		ShapeSide1= checkIfPositive(input);

		cout << "Enter the height for the trapazoid\n";
		cin >> input;
		height= checkIfPositive(input);

		cout << "Enter the second side for the trapazoid\n";
		cin >> input;
		ShapeSide2= checkIfPositive(input);

		cout << "Enter the third side for the trapazoid\n";
		cin >> input;
		ShapeSide3= checkIfPositive(input);

		cout << "The area of the trapazoid is " << trapazoid.getArea(base, ShapeSide1, height) << endl;
		cout << "The perimeter of the trapazoid is " << trapazoid.getPerimeter(base, ShapeSide1, ShapeSide2, ShapeSide3) << endl;
		break;
	case 6:
		cout << "Enter the length of the square\n";
		cin >> input;
		length= checkIfPositive(input);
	
		cout << "The area of the square is " << square.GetArea(length) << endl;
		cout << "The perimeter of the square is " << square.GetPerimeter(length) << endl;



		//	default:
			//	cout << "This is the end";
	}
	
	return 0;
}

	void menu() {
		
	   cout << setw(23) << "Press '1' for Rectangle"
			<< setw(25) << "Press '2' for Circle"
			<< setw(28) << "Press '3' for Sector"
			<< setw(20) << "\nPress '4' for Triangle"
			<< setw(29) << "Press '5' for Trapazoid"
			<< setw(27) << "Press '6' for Square\n\n";
	}

	void cinClear() {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}


	double checkIfPositive(double input)
	{
		
		while (input <= 0) {
				if (input == 0) {
					cout << "Number can't be 0\n";
					while (input == 0) {
						cin >> input;
					}
				}
				else {
					cout << "Enter a Positive number\n";
					while (input < 0) {
						cin >> input;
					}
				}
		}
		return input;
	}


