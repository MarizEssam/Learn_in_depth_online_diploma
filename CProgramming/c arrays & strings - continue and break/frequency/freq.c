/*
 * freq.c
 *
 *  Created on: 26 Dec 2023
 *      Author: Mariz
 */

#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[1000], b;
	int i,count =0;
	printf("enter a string: ");
	fflush(stdout);
	gets(a);
	fflush(stdin);
	printf("enter a char: ");
	fflush(stdout);
	scanf("%c",&b);
	for(i=0;a[i]!= '\0';i++){
		if (a[i]== b){
			count++;
		}

	}
	printf("frequency of %c is %d" , b,count);

	return 0;
}
