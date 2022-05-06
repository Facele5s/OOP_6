#include "Methods.h"

void sorting(int* a, int size)
{
	for (int i = 0; i < sizeof(a); i++)
	{
		for (int j = 0; j < sizeof(a) - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				a[j + 1] = a[j] + a[j + 1];
				a[j] = a[j + 1] - a[j];
				a[j + 1] = a[j + 1] - a[j];

			}
		}
	}
}

void print(int* a, int size)
{
	for (int i = 0; i < sizeof(a); i++)
	{
		cout << a[i] << " ";
	}
}

void sorting(double* a, int size)
{
	for (int i = 0; i < sizeof(a); i++)
	{
		for (int j = 0; j < sizeof(a) - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				a[j + 1] = a[j] + a[j + 1];
				a[j] = a[j + 1] - a[j];
				a[j + 1] = a[j + 1] - a[j];
			}
		}
	}
}

void print(double* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
}