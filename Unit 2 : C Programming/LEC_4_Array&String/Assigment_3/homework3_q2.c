/*
 ============================================================================
 Name        : homework_3_2.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : Average of the numbers using array in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int n=0;
	float z[120];
	float average=0;
	printf("enter the number of data :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	while(n>120 ||n<=0){
		printf(" invalid number please enter number in range 1 to 120\n");
		printf("enter the number of data again :\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);
	}
	for(int i=0;i<n;i++){
		printf("enter the number :");
		fflush(stdin);fflush(stdout);
		scanf("%f",&z[i]);
	}
	for(int i=0;i<=n;i++){
		average+=z[i]/n;
	}

	printf("Average of the numbers is :%.2f",average);

}

