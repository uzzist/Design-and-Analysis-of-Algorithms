#include <iostream>
#include <fstream>
using namespace std;

void function(int [], int);

int main()
{
	int arr[12] = {7,5,2,9,12,23,26,33,45,21,67,89};
	int size = 12;

	function(arr, size);
	return 0;
}

void function(int arr[], int size)
{
	int s1 = size / 3;
	int s2 = (size / 3) + s1;
	int min = arr[0];

	if (arr[0] < arr[s1 - 1])
	{
		min = arr[0];
	}
	else
	{
		min = arr[s2 - 1];
	}

	if (arr[s1] < arr[s2 - 1] && min > arr[s1])
	{
		min = arr[s1];
	}
	else if (min > arr[s2 - 1])
	{
		min = arr[s2 - 1];
	}

	if (arr[s2] < arr[size - 1] && min > arr[s2])
	{
		min = arr[s2];
	}
	else if (min > arr[size - 1])
	{
		min = arr[size - 1];
	}

	cout << "Minimum:	" << min;
}
