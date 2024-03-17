// July 27, 2019
// Purpose: This program show us if is a leap year, or not, depending on the year that the user introduces.
// Input: a year.
// Output: number of days that february has in that year.

#include <iostream>
using namespace std;

int main()
{
	int year;

	cout << "Please enter a year: \n";
	cin >> year;

	if (year % 100 == 0)
	{
		if (year % 400 == 0)
			cout << "February has 29 days, leap year\n";
	}
	else if (year % 4 == 0)
	{
		cout << "February has 29 days, leap year\n";

	}
	else if (year % 100 != 0)
		cout << "February has 28 days, is a normal year\n";

	return 0;
}
