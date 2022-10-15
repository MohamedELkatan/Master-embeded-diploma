/*
 ============================================================================
 Name        : c.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : sum of two matrices in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include "string.h"
int main() {

float first_matrix[2][2];
float second[2][2];

printf("enter the elements of 1st matrix:\n");

for(int l=0;l<2;l++){

	for(int s=0;s<2;s++)
	{
		printf("enter a%d%d :",s+1,l+1);
		fflush(stdin);fflush(stdout);
		scanf(" %f" ,&first_matrix[l][s]);
	}
}

printf("enter the elements of 2nd matrix:\n");

for(int i=0;i<2;i++){

	for(int w=0;w<2;w++)
	{
		printf("enter%d%d :",w+1,i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&second[i][w]);
	}
}
printf("sum of matrix :\n");
float sum[2][2];
for(int i=0;i<2;i++){

	for(int w=0;w<2;w++)
	{
		sum[i][w]=first_matrix[i][w]+second[i][w];
		//printf("%.2f ",sum[i][w]);

	}
}
for(int i=0;i<2;i++){

	for(int w=0;w<2;w++)
	{
		//sum[i][w]=first_matrix[i][w]+second_matrix[i][w];
		printf("%.2f\t ",sum[i][w]);

	}
	printf("\n");

}}
