// C++ program to demonstrate
// example of cosh() function.

#include <iostream>
#include <cmath>
#include <valarray>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
	
	*/

using namespace std;

int main() {
	// Initializing valarray
	valarray<double> varr = { 0.2, 0.14, 1.0, 0.0 };

	// Declaring new valarray
	valarray<double> varr1;

	// use of cosh() function
	varr1 = cosh(varr);
	// Displaying new elements value
	cout << "The new valarray with" << " manipulated values is : " << endl;

	for (double& x : varr1) {
		cout << x << " ";
	}

	cout << endl;

	_getch();
	return 0;
}
