/*
 * main.c
 *
 *  Created on: 6 Jan 2024
 *      Author: Mariz
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("enter two numbers as intervals: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d  %d" , &a,&b);
	int i,flag;
	for(i=a+1;i<b;i++){
		flag= checkprime(i);
		if (flag == 1) printf("%d  ",i);
	}
return 0;
}
int checkprime(int a){
	int flag = 1 ;
	int i;
	for(i=2;i<=a/2;i++){
		if(a%i==0) {
			flag =0;
			break;
		}
	}
	return flag;
}


