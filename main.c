#include "my_mat.h"
#include <stdio.h>

int main (){
	int A[LENGTH][LENGTH];
	char s = 'H';
	int i ,j ;
	while(s != 'D'){
		scanf(" %c",&s);
		if(s=='A'){
			getNumbers(A);
		}
		else if(s=='B'){
			scanf(" %d %d",&i,&j);
			isPath(A,i,j);	
		}	
		else if(s=='C') {
			scanf(" %d %d",&i,&j);
			shortest(A,i,j);
		}
	}
	return 0;
}

