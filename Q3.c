//Q3
//         5
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5

#include<stdio.h>

int main(){
//	variable declarations



	int i,j,k;
//	nested for loops
	for(i=1;i<=5;i++){
		for(k=i+1;k<=5;k++){	
			printf("  ");
		}
		for(j=6-i;j<=5;j++){
//			priint the number
			printf(" %d",j);
		}
		printf("\n");
	}
	
}
