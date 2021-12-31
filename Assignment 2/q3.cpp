#include <iostream>
#include <fstream>
using namespace std;

void function(int arr[], int size);
int function1(int arr[], int start, int end);

int main()
{
	int arr[12] = {-2,-3,3,4,6,7,8,9,10,11,12,13};
	int size = 12;
	
	function(arr, size);
	return 0;
}


void function(int arr[], int size)
{
	cout << function1(arr, 1, size - 1);
}

int function1(int arr[], int start, int end)
{
	if (start == end - 1)
	{
		if (arr[start] == start)
		{
			return start;
		}
		else if (arr[end] == end)
		{
			return end;
		}

		return -1;
	}
	else if (arr[start] == start)
	{
		return start;
	}
	else if (arr[end] == end)
	{
		return end;
	}
	else if (arr[start] >= start && arr[start] <= end / 2)
	{
		return function1(arr, start, (start + end) / 2);
	}
	else
	{
		return function1(arr, (start + end) / 2, end);
	}
} 
