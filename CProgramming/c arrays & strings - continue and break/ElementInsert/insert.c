/*
 * insert.c
 *
 *  Created on: 26 Dec 2023
 *      Author: Mariz
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,x[50],number , loc;
	printf("Enter number of array: ");
	fflush(stdout);
	scanf("%d",&n);

	printf("enter data: ");
	fflush(stdout);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		printf("%d",x[i]);
		fflush(stdout);
		if(i==n-1) printf("\n");
	}
	printf("enter element to be inserted: \n");
	fflush(stdout);
	scanf("%d",&number);
	printf("enter location: \n");
	fflush(stdout);
	scanf("%d",&loc);
	for(i=n-1;i>=loc-1;i--){
		x[i+1]=x[i];
	}
	x[loc-1]=number;
	for(i=0;i<=n;i++){
		printf("%d",x[i]);
	}

}
