/*
 * search.c
 *
 *  Created on: 26 Dec 2023
 *      Author: Mariz
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,x[50],s;
	printf("Enter number of array: ");
	fflush(stdout);
	scanf("%d",&n);

	printf("enter data: ");
	fflush(stdout);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
}
	printf("enter element to be searched: ");
	fflush(stdout);
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(x[i]!= s) continue;
		else{
			break;
		}
	}
	if(i<n){
		printf("number at location %d",i+1);
	}
	else {
		printf("Number not found");
	}

	return 0;
}
