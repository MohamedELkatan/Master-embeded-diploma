/*
 ============================================================================
 Name        : struct.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : employees data in C, Ansi-style
 ============================================================================
 */

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"


struct SDate {
	int day;
	int month;
	int year;
};
struct SEmployee{
	char name[50];
	struct SDate birthdate;
	int salary;
	struct SDate graduationdate;
};

struct SEmployee READ_INFORMATIONS(	int counter,struct SEmployee member ){

		printf("enter %d employee name : ",counter+1);
		fflush(stdin);fflush(stdout);
		gets(member.name);



		printf("enter his-her birth date (day/month/year)");
		fflush(stdin);fflush(stdout);
		scanf("%d %d %d",&member.birthdate.day,
						&member.birthdate.month,
						&member.birthdate.year);


		printf("enter his-her graduation date (day/month/year)");
		fflush(stdin);fflush(stdout);
		scanf("%d %d %d",&member.graduationdate.day,
						&member.graduationdate.month,
						&member.graduationdate.year);

		printf("enter his-her salary");
		fflush(stdin);fflush(stdout);
		scanf("%d",&member.salary);


	return  member;

}

void PRINT_EMPLOYEES (int counter,	 struct SEmployee member1){
	printf("\nemployee number %d informtion is:\n name:%s \n birth date : ( %d / %d / %d ) \n graduation date : ( %d / %d / %d ) \n salary : %d",counter+1 ,
			member1.name,
			member1.birthdate.day,
			member1.birthdate.month,
			member1.birthdate.year,
			member1.graduationdate.day,
			member1.graduationdate.month,
			member1.graduationdate.year,
			member1.salary);
	}


int main(void) {
	struct SEmployee member[1000] ;
	int num_employees;
	printf("enterrr the number of employees data that you want to save ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_employees);

	for(int i=0;i<num_employees;i++){

		member[i]=READ_INFORMATIONS(i,*member);
	}
	for(int i=0;i<num_employees;i++){

	PRINT_EMPLOYEES (i,member[i]);

}
}
