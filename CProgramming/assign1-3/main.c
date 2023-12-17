/*
 * main.c
 *
 *  Created on: 16 Dec 2023
 *      Author: Mariz
 */



#include <stdio.h>
#include <stdlib.h>

int main(){

	int m,n;
	int sum =0;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d",&m,&n);
	sum = m+n;
	printf("Sum: %d" , sum );
	return 0;
}
