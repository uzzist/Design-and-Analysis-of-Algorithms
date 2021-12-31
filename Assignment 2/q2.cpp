#include<iostream>
using namespace std;

int bsearch(int [], int);
int bsearch2(int [], int, int, int);

int main()
{
	int array[] = {4,2,15,13,409,578,789,924,1012,1456,1300};
	int key;
	cout<<"Enter number to find in the array: ";
	cin>>key;
	
	int result = bsearch(array,key);
	if(result == -1)
	{
		cout<<"Element not found\n";
	}
	else
	{
		cout<<"Element found at index "<<result<<endl;
	}
	return 0;
}
int bsearch(int array[],int key)
{
	bool done = false;
	int lower = 1;
	int upper = 2;
	int temp;
	
	while(!done)
	{
		if(key == array[upper])
		{
			return upper;
		}
		else if(key > array[upper])
		{
			temp = lower;
			lower = upper;
			upper = upper * 2;
		}
		else if(array[upper] >= 1000 )
		{
			return -1;
		}
		else
		{
			done = true;
			break;
		}
	}	
	if(done == true)
	{
		int res = bsearch2(array,lower,upper, key);
		return res;
	}
	else
	{
		return -1;
	}
}
int bsearch2(int a[],int first, int last, int key)
{
	int middle;
   	if(last >= first)
   	{
      	middle = (first + last)/2;
      	if(a[middle] == key)
      	{
         	return middle+1;
      	}
      	else if(a[middle] < key)
      	{
         	return bsearch2(a,middle+1,last,key);
      	}
      	else
      	{
         	return bsearch2(a,first,middle-1,key);
      	}

   	}
   	return -1;
}
