/* CSCI 261 A02: Triangles
* Author: TJ and Alexis
*
* Add more complete description here...
April 17th warmup
*/

#include <iostream>   // For cin, cout, etc.
using namespace std;  // For standard namespace 
#include <cmath>
#include <iomanip>
#include <ctime>
#include <math.h>

int main() {
	// PART I: INSERT YOUR CODE BELOW HERE
	int x1;
	int y1;
	double x2;
	double y2;
	double x3;
	double y3;
	srand(unsigned int(time(NULL)));
	/*x1 = rand() % 20 - 10;
	y1 = rand() % 20 - 10;*/
	x1 = 10;
	y1 = -5;
	cout << "The first point of your triangle is (" << x1 << ", " << y1 << ")." << endl;
	cout << "Now, give us the second point's x position:" << endl; 
	cin >> x2;
	cout << "Its y position:" << endl;
	cin >> y2;
	cout << "The third point's x position:" << endl;
	cin >> x3;
	cout << "Its y position:"<<endl;
	cin >> y3;
	

		// PART I INSERT YOUR CODE ABOVE HERE
		// PART II: INSERT YOUR CODE BELOW HERE
	double side1;
	double side2;
	double side3;
	double perimeter;
	double area;
	side1 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	side2 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
	side3 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
	perimeter = side1 + side2 + side3;
	area = abs(sqrt(perimeter / 2 * (perimeter / 2 - side1)*(perimeter / 2 - side2)*(perimeter / 2 - side3)));
		// PART II INSERT YOUR CODE ABOVE HERE
		// PART III INSERT YOUR CODE BELOW HERE
	cout << fixed << setprecision(2) << "The first point is: (" << x1 << ", " << y1 << ")";
	cout << fixed << setprecision(2) << "The second point is: (" << x2 << ", " << y2 << ")";
	cout << fixed << setprecision(2) << "the third point is: (" << x3 << ", " << y2 << ")";
	cout << fixed << setprecision(2) << "The side lengths are:" << side1 << ", " << side2 << ", " << side3 << "." << endl;
	cout << fixed << setprecision(2) << "The perimeter of the triangle is " << perimeter << "." << endl;
	cout << fixed << setprecision(2) << "The area of the triangle is " << area << "." << endl;

		// PART III INSERT YOUR CODE ABOVE HERE

		return 0; // signals the operating system that our program ended OK.
}