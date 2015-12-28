#include<stdio.h>

int linearSearch(int *a, int n, int key);

int main()
{
	int arr[5],i,key;
	printf("Enter array elements:- ");
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter Key: ");
	scanf("%d",&key);
	i = linearSearch(arr, 5, key);
	if(i==-1)
	{
		printf("Key Not Found\n");
	}
	else
	{
		printf("Key at index: %d\n",i);
	}
	return 0;
}

int linearSearch(int *a, int n, int key)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==key)
		{
			return i;
		}
	}
	return -1;
}
