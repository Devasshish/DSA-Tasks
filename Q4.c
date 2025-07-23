//Q4
// 10101
//  1010
//   101
//    10
//     1
#include<stdio.h>
int main(){
//	var declarw	
	int i,j,k;
	//looping 
	for(i=1;i<=5;i++){
		for(k=1;k<=i;k++){
			printf(" ");
		}
		int n=1;
		for(j=i;j<=5;j++){
			//condition
			if(n==1){
				printf("%d",n);
				n=0;
			}
			else{
				printf("%d",n);
				n++;
			}
		}
		printf("\n");
	}
}
