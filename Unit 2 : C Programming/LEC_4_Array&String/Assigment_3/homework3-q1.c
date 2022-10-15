/*
 ============================================================================
 Name        : homework_3_2.c
 Author      : Mohammed Elkattan
 Version     :
 Copyright   : Your copyright notice
 Description : Transpose matrix in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a1[15][15],a2[15][15];
	int r,c;
	printf("enter number of rows and columns");
	fflush(stdin),fflush(stdout);
	scanf("%d %d",&r ,&c);
	for(int i=0; i<r;i++){
		for(int w=0;w<c;w++){
			printf("enter a1(%d%d):",i+1,w+1);
			fflush(stdin),fflush(stdout);
			scanf("%d",&a1[i][w]);
			printf("\n");
		}
	}
	for(int i=0; i<r;i++){
		for(int w=0;w<c;w++){
			printf("enter a2(%d%d):",i+1,w+1);
			fflush(stdin),fflush(stdout);
			scanf("%d",&a2[i][w]);
			printf("\n");
		}
	}
		printf("Matrix a1 is\n");
		for(int i=0; i<r;i++){
			for(int w=0;w<c;w++){
				printf("%d\t",a1[i][w]);
			}
			printf("\n");
		}
		printf("Matrix a2 is\n");
		for(int i=0; i<r;i++){
			for(int w=0;w<c;w++){
				printf("%d\t",a2[i][w]);
			}
			printf("\n");
		}
		printf("Transpose matrix  of a2 is\n");
		float trans[20][20];
		for(int i=0; i<c;i++){
					for(int w=0;w<r;w++){
					trans[i][w]=a2[w][i];
					}
					}
		for(int i=0; i<c;i++){
					for(int w=0;w<r;w++){
						printf("%.2f\t",trans[i][w]);
					}

					printf("\n");


	}
}


