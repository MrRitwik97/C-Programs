/* Binary Search Example
*/

#include<stdio.h>

//Function Declaration
int binarySearch(int *a, int n, int key);

//Main function definition
int main()
{
	//variable declaration
	int arr[100], i ,key, n;

	//input of array length
	printf("Enter The Array Length;- \n");
	scanf("%d",&n);
	
	
	//input of Array
	printf("Enter Elements of Array:- \n");
		for(i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
	printf("Enter Key:- \n");
	scanf("%d", &key);
	
	//search
	i = binarySearch(arr, 10, key);
	
	//output
	if(i == -1)
	{
		printf("Key not found.\n");
	}
	else
	{
		printf("Key is at index no:- %d \n",i);
	}
	
	return 0;
}

// function definition
int binarySearch(int *a, int n, int key)
{
	int start = 0; 
	int end = n - 1; 
	int mid = (start + end) / 2;
		while(start <= end && a[mid] != key)
		{
			if(key < a[mid])
			{
				end = mid - 1;
			}
			else
			{
				start = mid + 1;
			}
			mid = (start + end) / 2;
		}
		if(start > end)
		{
			return -1;
		}
		return mid;
}
