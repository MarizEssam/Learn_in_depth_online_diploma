/*
 * quiz.c
 *
 *  Created on: 5 Jan 2024
 *      Author: Mariz
 */

#include <stdio.h>
#include<stdlib.h>

int factorial(int n){
	//int f = 1;

//while(n>0){
	if (n==1 || n==0) {
		return 1;

	}
	else{
		return factorial(n-1) *n;
		//--n;
		//factorial(--n);
	}
}
//}

int main()
{
	int n;
	printf("Enter a number");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	printf("%d" ,factorial(n));
	return 0;
}

