/*
 ============================================================================
 Name        : homework_q8.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : String reverse using array in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		char arrych[700];
		char REV_arrych[700];

		printf("enter a string :");
		fflush(stdin);fflush(stdout);
		gets(arrych);
		int counter=0;
		counter=strlen(arrych)-1;
		int w=0;
		for(int i=counter;i>=0;i--)
		{	w=counter-i;
			REV_arrych[w]=arrych[i];

		}

			printf("String reverse : %s\n",REV_arrych);

	}
}

