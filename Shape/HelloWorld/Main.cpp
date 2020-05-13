
#include "ShapeClass.h";
#include <iomanip>;
#include <iostream>;


using namespace std;

int doShape(int &ch); 
void menu();
void cinClear();

int main() {

	//Shape *shape;

	cout << "I can find the area and perimeter of a shape.\n\nWhich shape would you like to find?\n";
	menu();

	int ch;
	

	while (!(cin >> ch) || ch > 6 || ch < 1) {
		cinClear();
		cout << "Invalid choice\n";
	}

	doShape(ch);
	//cinClear();
			
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
	//	cin >> cMenu;
//cMenu = toupper(cMenu);

		while (cMenu != 'y' || cMenu != 'Y' || cMenu != 'N' || cMenu != 'n') {
			cinClear();
			cin >> cMenu;

			if (cMenu == 'y' || cMenu == 'Y' || cMenu == 'n' || cMenu == 'N') {
				break;
			}
			cout << "That is an invalid choice.\n";
		}

		if (cMenu == 'Y' || cMenu =='y') {
			menu();
			cout << "Please enter a number between 1 and 6\n";
			while (!(cin >> ch) || ch > 7 || ch < 1) {
				cinClear();
			}
			doShape(ch);
				
		}
		else {
			cout << "Please enter a number between 1 and 6\n";
			while (!(cin >> ch) || ch > 7 || ch < 1) {
				cinClear();
			}
			doShape(ch);
				
		}
		cout << "\nDo you want to try another?\n\nPress 'Y'\n";
		cin >> cAnotherOne;
	}
	
		cout << "Thank you for using Shapes\n\n";

	
	system("Pause");
	return 0;	
}

int doShape(int &ch) {
	//Shape *shape;
	Rectangle rectangle;
	Circle circle;
	Sector sector;
	Triangle triangle;
	Trapezoid trapazoid;
	Square square;
	double radius, angle;
	int length, width, base, height, ShapeSide1, ShapeSide2, ShapeSide3;

	

	switch (ch)
	{

	case 1: // Rectangle

		cout << "Enter the width for the Rectangle.\n";
		cin.clear();
		cin >> width;
		cout << " Enter the length for the Rectangle.\n";
		cinClear();
		cin >> length;

		cout << "The area of the Rectangle is " << rectangle.GetAreaRect(width, length) << endl;
		cout << "The perimeter of the Rectangle is " << rectangle.GetPerimeter(width, length) << endl;
		break;


	case 2: // circle

		cout << "Enter the radius for the circle.\n";
		cinClear();
		cin >> radius;

		cout << "The perimeter of the circle " << circle.GetPerimeter(radius) << endl;
		cout << "The area of the circle is " << circle.GetArea(radius) << endl;

		break;

	case 3:// sector

		cout << "Enter the radius for the sector.\n";
		cinClear();
		cin >> radius;
		cout << "Enter the angle of the sector.\n";
		cinClear();
		cin >> angle;

		cout << "\nThe area of the sector is " << sector.GetArea(radius) << endl;
		cout << "The perimeter of the sector is " << sector.GetPerimeter(radius, angle) << endl;
		break;

	case 4:// triangle
		cout << "Enter the base for the triangle.\n";
		cinClear();
		cin >> base;
		cout << "Enter the height for the triangle.\n";
		cinClear();
		cin >> height;
		cout << "Enter side 2\n";
		cinClear();
		cin >> ShapeSide1;
		cout << "Enter side 3\n";
		cinClear();
		cin >> ShapeSide2;

		cout << "The area of the triangle is " << triangle.GetArea(base, height) << endl;
		cout << "The perimeter of the triangle is " << triangle.GetPerimeter(ShapeSide1, ShapeSide2, base) << endl;
		break;

	case 5: // Trapezoid
		cout << "Enter the base for the trapazoid\n";
		cinClear();
		cin >> base;
		cout << "Enter the first side for the trapazoid\n";
		cinClear();
		cin >> ShapeSide1;
		cout << "Enter the height for the trapazoid\n";
		cinClear();
		cin >> height;
		cout << "Enter the second side for the trapazoid\n";
		cinClear();
		cin >> ShapeSide2;
		cout << "Enter the third side for the trapazoid\n";
		cinClear();
		cin >> ShapeSide3;

		cout << "The area of the trapazoid is " << trapazoid.getArea(base, ShapeSide1, height) << endl;
		cout << "The perimeter of the trapazoid is " << trapazoid.getPerimeter(base, ShapeSide1, ShapeSide2, ShapeSide3) << endl;
		break;
	case 6:
		cout << "Enter the length of the square\n";
		cinClear();
		cin >> length;
		cout << "The area of the square is " << square.GetArea(length) << endl;
		cout << "The perimeter of the square is " << square.GetPerimeter(length) << endl;



		//	default:
			//	cout << "This is the end";
	}
	return 0;
}

	void menu() {
		
	   cout << setw(25) << "\nPress '1' for Rectangle"
			<< setw(25) << "Press '2' for Circle"
			<< setw(28) << "Press '3' for sector"
			<< setw(20) << "\nPress '4' for triangle"
			<< setw(29) << "Press '5' for Trapazoid"
			<< setw(27) << "Press '6' for square\n\n";
	}

	void cinClear() {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}
	
