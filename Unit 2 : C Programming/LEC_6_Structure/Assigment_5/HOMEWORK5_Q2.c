/*
 ============================================================================
 Name        : HOMEWORK5_Q2.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : sum of distances in feet and inches in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>




struct INCH_FEET{
	float feet;
	float inch;
};

int main(void) {
	int i=0;
	struct INCH_FEET var[20];
	struct INCH_FEET result_var;

do{
	printf("Enter the %d distance :\n",i+1);
	fflush(stdin);fflush(stdout);
	printf("Feet =");
	fflush(stdin);fflush(stdout);
	scanf("%f",&var[i].feet);
	printf("Inch =");
	fflush(stdin);fflush(stdout);
	scanf("%f",&var[i].inch);
	printf("to continue adding distances hit 'y' to stop hit any key !");
	fflush(stdin);fflush(stdout);
++i;
}
while(getchar()=='y'&&i<20);

for(int t=0;t<i;t++)
{
	result_var.feet+=var[t].feet;
	result_var.inch+=var[t].inch;
}
while(result_var.inch>12){
	result_var.inch-=12;
	result_var.feet+=1;
	continue;
}

printf(" the sum of distances in feet and inches is = %.2f' %.2f\" ",result_var.feet,result_var.inch);

}
