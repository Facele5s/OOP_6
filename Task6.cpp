#include "Methods.h"

int main()
{
	int size = 8;
	int a1[] = { 5, 9, 4, 1, 8, 2, 6, 3};
	double a2[] = { 90.0, 80.0, 70.0, 60.0, 50.5, 40.1, 30.1, 20.9 };

	cout << "Int: " << endl;
	print(a1, size);
	cout << endl;
	sorting(a1, size);
	print(a1, size);
	cout << endl;

	cout << "Double: " << endl;
	print(a2, size);
	cout << endl;
	sorting(a2, size);
	print(a2, size);
	cout << endl;
}