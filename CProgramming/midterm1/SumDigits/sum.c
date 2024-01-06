/*

 * sum.c
 *
 *  Created on: 6 Jan 2024
 *      Author: Mariz
 */

#include<stdio.h>
#include<stdlib.h>
int sum(int n){
	int r;
	static int new_num = 0;
	if(n!= 0){
		r=n%10;
		new_num += r;
		sum(n/10);
	}
	else{
		return 0;
	}
	return new_num;
}
int main(){
	int n;
	printf("Enter a number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}
