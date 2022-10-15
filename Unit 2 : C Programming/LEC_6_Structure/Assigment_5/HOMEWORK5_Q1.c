/*
 ============================================================================
 Name        : HOMEWORK5_Q1.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : student informations in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

 struct SStudents_data{

	 char name[30] ;
	 int student_roll;
	 int student_marks;
 };

int main(void) {
	static int i=0;
	struct SStudents_data variable[100];
	do{
printf("Enter the %d student informations:\n",i+1);
	fflush(stdin);fflush(stdout);
printf("Enter the student name:");
	fflush(stdin);fflush(stdout);
	gets(variable[i].name);
printf("Enter the student roll:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&variable[i].student_roll);
printf("Enter the student mark:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&variable[i].student_marks);
printf("to continue hit 'y' :");
	fflush(stdin);fflush(stdout);
++i;
	}
while(getchar()=='y');
	int c=i;
	do{
	printf("The %d student informations:\n",c-i+1);
	printf("student name:%s\n",variable[c-i].name);
	printf("student roll:%d\n",variable[c-i].student_roll);
	printf("student mark:%d\n",variable[c-i].student_marks);
	--i;
	}
	while(i>0);

}




