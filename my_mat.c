#include <stdio.h>
#include "my_mat.h"
#define LENGTH 10

void getNumbers(int b[][LENGTH]){
	int (*A)[LENGTH];
	A = b;
	for(int i=0;i<LENGTH;i++){
		for(int j=0;j<LENGTH;j++){
			scanf(" %d",&A[i][j]);
		}
	}
	for(int k=0;k<LENGTH;k++){
		for(int i=0;i<LENGTH;i++){
			for(int j=0;j<LENGTH;j++){
				if(i==j){
				}
				else if (A[i][k]==0 || A[k][j]==0){
				}
				else{
					if(A[i][j] == 0){
						A[i][j] = A[i][k]+A[k][j];
					}
					else if(A[i][j] > A[i][k]+A[k][j]){
						A[i][j] = A[i][k]+A[k][j];
					}
				}
			}
		}	
	}	
}
void isPath(int A [][LENGTH],int i,int j){
	if (A[i][j]!=0){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
}
void shortest(int A [][LENGTH],int i,int j){
	if(A[i][j] == 0){
		printf("-1\n");
	}
	else{
	
		printf("%d\n",A[i][j]);
	}
}
