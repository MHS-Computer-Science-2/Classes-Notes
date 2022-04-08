// Classes Notes

// I CAN explain the differences between a struct and a class
// I CAN use classes to solve problems

#include <iostream>
using namespace std;

class Polygon {
public:
    string name;
    int numSides;
    int sideLength;

    // Compute and return the permiter of the polygon
    int getPerimeter() {
        return numSides * sideLength;
    }

    // Display the polygon info
    void display() {
        cout << name << endl;
        cout << numSides << " sides of length " << sideLength << endl;
        cout << "Perimter: " << getPerimeter() << endl << endl;
    }
};

// Classes have features structs do not have:
//  1. Security: We can control what the outside world has access to using 'public'
//  2. Behaviors: We can add functions to the class to perform tasks


int main()
{
    //Create a Polygon object that represents a triangle
    Polygon tri;
    tri.name = "Triangle";
    tri.numSides = 3;
    tri.sideLength = 7;
    cout << "The perimeter of our triangle is " << tri.getPerimeter() << endl;

    //You try: Make a hexagon with side length 11 and display the perimeter
    Polygon hex;
    hex.name = "Hexagon";
    hex.numSides = 6;
    hex.sideLength = 11;
    cout << "The perimeter of our triangle is " << hex.getPerimeter() << endl;

    //Call the display function on each object
    tri.display();
    hex.display();


    system("pause");

}

