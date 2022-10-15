/*
 ============================================================================
 Name        : homework3_q3.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : number to be inserted in array in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size ,location,enterednum;
	int arry[50];
	printf("enter the no of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(int i=0;i<size;i++){
	fflush(stdin);fflush(stdout);
	scanf("%d",&arry[i]);
	}
	printf("enter the number to be inserted :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&enterednum);
	printf("enter the location to insert number in  :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&location);
	for(int w =size ; w >= location-1 ; w--)
	{
	arry[w]=arry[w-1];

	}
	arry[location-1]=enterednum;
	for(int i=0;i<=size;i++){
		printf("%d",arry[i]);printf("\t");


	}}

