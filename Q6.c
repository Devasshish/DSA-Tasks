//Q6
// 1                  1
// 1 2              2 1
// 1 2 3          3 2 1
// 1 2 3 4      4 3 2 1
// 1 2 3 4 5  5 4 3 2 1
#include<stdio.h>

int main(){
	//var declare
	int i,j,k;
	//loops
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" %d",j);
		}
		//spcace
		for(k=i*2;k<=10;k++){
			printf("  ");
		}
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
