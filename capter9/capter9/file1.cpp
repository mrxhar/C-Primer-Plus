#include <iostream>
#include "coordin.h"

using namespace std;
int main(void) {
	rect rplace;
	polar pplace;

	cout << "Enter the x and y value: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbar (q to quit); ";
	}
	cout << "Bye!\n";
	return 0;
}