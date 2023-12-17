/*
 * main.c
 *
 *  Created on: 16 Dec 2023
 *      Author: Mariz
 */

#include <stdio.h>
#include<stdlib.h>
int main(){
	char c;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c" , &c);
	printf("ASCII value of %c = %d" , c,c);
}

