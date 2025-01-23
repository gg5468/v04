#include "app.h"
#include <iostream>

// read animal id's (until 0) and display species name
// display total leg count
using namespace std;
using namespace vsite::oop::v4;
int main()
{
	leg_counter lc;
	while (true) {
		int x;
		std::cin >> x;
		if (x < 0 || x>3) {
			return 1;
		}
		if (x == 0) {
			std::cout << lc.legs();
			return 0;
		}
		lc.add_animal(animal_factory(x).get());
	}
	std::cout << lc.legs();
}
