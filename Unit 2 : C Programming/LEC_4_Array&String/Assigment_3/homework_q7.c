/*
 ============================================================================
 Name        : homework_q7.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : length of string in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		char arrych[700];
		printf("enter a string :");
		fflush(stdin);fflush(stdout);
		gets(arrych);
		printf("string length is = %d\n",strlen(arrych));
		int counter=0;
		for(int i=0;arrych[i]!=0;i++){
			if(arrych[i]!=0)
			{
				counter++;
			}
		}
		printf("length of string is = %d\n",counter);
}

}

