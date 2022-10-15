/*
 ============================================================================
 Name        : homework4_q3.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : REVERSE_STRING in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char word[100];
char string[100];

char REVERSE_STRING(char word[100]){
		int x;
		x=strlen(word)-1;

		for(int i=x;i>=0;i--){
			string[x-i]=word[i];

		}

		return *string;
	}

int main(void) {
	printf("enter a string to get its reverse");
	fflush(stdin);fflush(stdout);
	gets(word);
	REVERSE_STRING(word);
	printf("string reversed %s\n",string);
}
