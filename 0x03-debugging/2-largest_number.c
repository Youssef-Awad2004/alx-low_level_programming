#include<'main.h'>

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int arr[3]= {a,b,c};
       int largest = a;
	for (int i = 0; i<3; i++ )
	{
		if (arr[i] > largest)
		{
			largest = arr[i];
		}
	}	
	return (largest);
}

