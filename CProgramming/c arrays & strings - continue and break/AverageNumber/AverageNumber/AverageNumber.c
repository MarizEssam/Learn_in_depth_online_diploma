/*
 ============================================================================
 Name        : AverageNumber.c
 Author      : Mariz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("enter size of data: ");

	fflush(stdout);
	int n;
	scanf("%d",&n);
	fflush(stdin);
	float sum=0.0, average;
	float x[100];
	while(n<0 || n>100){
		printf("Error Enter a number between 0 and 100 \n");
		printf("Enter Number: ");
		scanf("%d" , &n);
	}
	int i;
	for(i=0;i<n;i++){
		printf("enter number:");
		fflush(stdout);
		scanf("%f", &x[i]);
		fflush(stdin);
		sum+=x[i];

	}
	average =sum/n;
	printf("%f",average);
	fflush(stdout);
	return 0;
}
