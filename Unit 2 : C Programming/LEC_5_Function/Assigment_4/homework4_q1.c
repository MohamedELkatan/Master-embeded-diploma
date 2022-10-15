/*
 ============================================================================
 Name        : homework4.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : prime_check function in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int prime_check(int x){
	int flag=1;
	if (x>=1 ){
		for(int t=2; t<x/2;++t){
			if(x%t==0){
				flag=0;
			}
		}
	}
	return flag;
}
int main(void) {
	int	 c,v,flagoo=1;
	printf("enter to numbers x and y (x<y) to get the primes between them");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&c,&v);
	for(int i=c;i<v;i++){
		flagoo=prime_check(i);
		if(flagoo==1){
			printf("%d\n",i);}
	}
}



