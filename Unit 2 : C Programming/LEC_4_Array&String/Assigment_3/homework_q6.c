/*
 ============================================================================
 Name        : homework_q6.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : freq of character using array in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		char arrych[700];
		char a;

		printf("enter a string :");
		fflush(stdin);fflush(stdout);
		gets(arrych);
		printf("enter a character :");
		fflush(stdin);fflush(stdout);
		scanf("%c",&a);

		int	counter=0;
		for(int i=0; arrych[i]!=0;i++){

			if(a==arrych[i]){counter++; }
		}
		printf("freq of %c is : %d \n",a,counter);
	}
}

