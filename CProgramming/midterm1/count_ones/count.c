/*
 * count.c
 *
 *  Created on: 6 Jan 2024
 *      Author: Mariz
 */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	int count = 0;
	printf("enter a number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d" , &a);
	while(a){
		count += a&1;
		a>>=1;
	}
	printf("Number of ones is %d" , count);
	return 0;
	}
