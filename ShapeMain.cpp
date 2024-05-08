#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;

int main() {
    char choice;
    do {
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";

        cin >> choice;

        switch(choice) {
            case '1': {
                double side;
                cin >> side;
                shapes::Square square(side);
                cout << "Area of square: " << Area::calculateSquareArea(square) << std::endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter base length of triangle: ";
                cin >> base;
                cout << "Enter height of triangle: ";
                cin >> height;
                shapes::Triangle triangle(base, height);
                cout << "Area of triangle: " << Area::calculateTriangleArea(triangle) << std::endl;
                break;
            }
            case '3': {
                double radius;
                cout << "Enter radius of circle: ";
                cin >> radius;
                shapes::Circle circle(radius);
                cout << "Area of circle: " << Area::calculateCircleArea(circle) << std::endl;
                break;
            }
            case '4':
                cout << "Exiting program.\n";
                break;
            default:
                 << "Invalid choice. Please try again.\n";
                break;
        }
    } while(choice != '4');

    return 0;
}
