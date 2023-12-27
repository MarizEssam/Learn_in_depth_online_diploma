/*
 ============================================================================
 Name        : matrixSum.c
 Author      : Mariz
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a[2][2], b[2][2], result[2][2];
	int i, j;
	printf("Enter 1st array: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a %d %d : \n", i + 1, j + 1);
			scanf("%f", &a[i][j]);
		}
	}
	printf("Enter 2nd array \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("b %d %d : \n", i + 1, j + 1);
			scanf("%f", &b[i][j]);
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("Sum \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%f ", result[i][j]);
			if (j == 1)
				printf("\n");
		}
	}
	return 0;
}
