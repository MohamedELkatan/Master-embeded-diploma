/*
 ============================================================================
 Name        : homework3_q5.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description :search in array in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
	int size ,enterednum;
	int arry[50];
	printf("enter the no of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		fflush(stdin);fflush(stdout);
		scanf("%d",&arry[i]);
	}
	printf("enter the number to be searched :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&enterednum);
int i=0;
	while( i!=size && arry[i]!=enterednum  ){
			i++;
		}
	if(arry[i]==enterednum ){printf("finded in location 5%d\n",i+1);}
	else{printf("not listed search again\n");}

	}
}

