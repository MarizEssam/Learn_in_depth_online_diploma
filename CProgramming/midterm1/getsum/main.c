/*
 * main.c
 *
 *  Created on: 6 Jan 2024
 *      Author: Mariz
 */
#include <stdio.h>
#include <stdlib.h>

int getsum(int i,int j){
	static int sum =0;
	if(i<=j){
		//printf("%d",sum);

		sum +=i;
		//printf("%d",sum);
		getsum(i+1,j);
	}
	else return 0;
	return sum;
}

int main(){
	printf("%d" ,getsum(1,100));

	return 0;
}

