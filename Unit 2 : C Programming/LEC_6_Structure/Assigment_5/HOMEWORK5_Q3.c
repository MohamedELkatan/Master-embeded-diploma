/*
 ============================================================================
 Name        : Struct_lab.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : Adding the complex numbers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SComplex {
	double R_P;
	double I_P;
};

struct SComplex Readthecomlex (char nameofcomplex[]){

	struct SComplex memb;
	printf("enter %s complex value (Real then Imaginary)",nameofcomplex);
	fflush(stdin);fflush(stdout);
	scanf("%lf %lf",&memb.R_P,&memb.I_P);
return memb;
}

struct SComplex Addingcomplex(struct SComplex memb1,struct SComplex memb2 )
{
	struct SComplex memb3;

	memb3.R_P=memb1.R_P+memb2.R_P;
	memb3.I_P=memb1.I_P+memb2.I_P;
return memb3 ;
}

void printcomplex(char nameofcomplex[],struct SComplex memb_result){

	printf("the result of %s value is (%.2lf + j %.2lf )",nameofcomplex,memb_result.R_P,memb_result.I_P);

}

int main(void) {
	struct SComplex first_complex,
	second_complex,
	complex_result;

	first_complex= Readthecomlex("first");
	second_complex=Readthecomlex("Second");
	complex_result=Addingcomplex(first_complex,second_complex);
	printcomplex("Adding the complex numbers",complex_result);


}
