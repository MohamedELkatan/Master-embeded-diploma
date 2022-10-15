/*
 ============================================================================
 Name        : homework4_q2.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : factorial in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int x){

	if(x>1)
	return x*factorial(x-1);
}

int main(void) {
 int x;
printf("enter number to get its factorial =");
fflush(stdin);fflush(stdout);
scanf("%d",&x);
printf("factorial is = %d  ",factorial(x));
}
