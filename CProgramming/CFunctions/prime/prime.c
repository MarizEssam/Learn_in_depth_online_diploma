/*
 * prime.c
 *
 *  Created on: 6 Jan 2024
 *      Author: Mariz
 */

#include <stdio.h>
#include <stdlib.h>

int prime(int a,int b);
int main(){
	int a,b,flag,i;
	printf("Enter two numbers as intervals: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d" ,&a,&b);
	for (i =a+1;i<b;++i){

		flag = prime(i,b);
		if (flag ==1) printf("%d  ", i);
	}
	return 0;
}

int prime(int a , int b){
	//if(a<=b){
		int i;
		int f=1;
		for(i=2; i<= a/2; ++i){
			if(a%i ==0){
				f = 0;
				break;
			}

		}
		return f;
		}

