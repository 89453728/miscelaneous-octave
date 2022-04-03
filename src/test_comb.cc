#include "comb.h"
#include <cassert>
#include <iostream>
#include <octave/dim-vector.h>

int main(void) {
	NDArray l = linsp(0,10,7);

	// testing integration
	std::cout << "l length: " << l.numel() << "\n";
	double i = integrate(l);
	std::cout << "result "<<i<<"\n"; 

	
	// testing printing on screen
	std::cout <<"l: " <<l << "\n";

	// testing operators
	NDArray b = linsp(3,8,7);
	NDArray r = NDArray(dim_vector(1,7));
	
	std::cout <<"b: "<<b <<"\n";

	r = l*b;
	std::cout << "l*b: ";
	std::cout << r << "\n";
	r = l^b;
	std::cout << "l^b: ";
	std::cout << r << "\n";
	r = 1.23^b;
	std::cout << "1.23^b: ";
	std::cout << r << "\n";
	r = l^2.32;
	std::cout << "l^2.32: ";
	std::cout << r << "\n";
	r = 3.21*b;
	std::cout << "3.21*b: ";
	std::cout << r << "\n";
	r = b*-1.23;
	std::cout << "b*-1.23: ";
	std::cout << r << "\n";

	// testing gamma function

	std::cout << gammma(3) << "\n";
	std::cout << gammma(5) << "\n";
	std::cout << gammma(1) << "\n";

	return 0;
}
