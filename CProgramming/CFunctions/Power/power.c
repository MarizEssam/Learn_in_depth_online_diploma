/*
 * power.c
 *
 *  Created on: 6 Jan 2024
 *      Author: Mariz
 */
#include<stdio.h>
#include<stdlib.h>
int power(int a, int b);

int main(){
	int a , b,r;
	printf(" Enter Base number: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter a power number: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&b);
	r = power(a,b);
	printf("%d power of %d is equal to %d" , a ,b, r);
}

int power(int a , int b){
	if (b==0) return 1;
	else return a*power(a,b-1);
}

