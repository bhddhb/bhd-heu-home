#include<stdio.h>

int main()
{
	int arr[5];
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
