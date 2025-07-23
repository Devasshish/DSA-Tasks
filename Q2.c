//Q2 
//11
//12 13
//14 15 16
//17 18 19 20

#include<stdio.h>

int main(){
//	variable declarations
	int i,j,n=11;
//	nested for loops
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
//			number print and increament
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	
}
