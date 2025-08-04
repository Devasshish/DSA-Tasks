//calculator program
//header files
#include<stdio.h>
//functions
float add(int n1,int n2){		
	return n1+n2;
}
float sub(int n1,int n2){
	return n1-n2;
}
float mul(int n1,int n2){
	return n1*n2;
}
float div(int n1,int n2){
	if(n2!=0){
		return (float)n1/n2;
	}
	else{
		printf("\nCannot Divided by Zero !!!!");
	}
}
int mod(int n1,int n2){
	if(n2!=0){
		return n1%n2;
	}
	else{
		printf("\nCannot perfor modulation !!!!");
	}
}
//main
int main(){
//	variable declare
	int a=0,ch,n1,n2;
	float res;
	while(a==0){
		printf("\n=======================================");
		printf("\n======== Calculator ===================");
		printf("\n=======================================");
		printf("\nPress 1 for +");
		printf("\nPress 2 for -");
		printf("\nPress 3 for *");
		printf("\nPress 4 for /");
		printf("\nPress 5 for %%");
		printf("\nPress 0 for exit");
		printf("\n=======================================");
		printf("\nEnter Your Choice : ");
		scanf("%d",&ch);
		if(ch==0){
			// a=1;
			printf("\nExiting .. Thank You !!");
			break;
		}
		else if(ch>=1 && ch<=5){
		    printf("\nEnter The First Number : ");
		    scanf("%d",&n1);
	    	printf("\nEnter The Second Number : ");
	    	scanf("%d",&n2);
//	    	cases checkking
			switch(ch){
				case 1:
					printf("\nAddition of %d and %d is %.2f",n1,n2,add(n1,n2));
					break;
				case 2:
					printf("\nSubtraction of %d and %d is %.2f",n1,n2,sub(n1,n2));
					break;
				case 3:
					printf("\nMultiplication of %d and %d is %.2f",n1,n2,mul(n1,n2));
					break;
				case 4:
					printf("\nDivision of %d and %d is %.2f",n1,n2,div(n1,n2));
					break;
				case 5:
					printf("\nModulation of %d and %d is %d",n1,n2,mod(n1,n2));
					break;
			    default:
			        break;
			}
		}
//	choice options
		else{
		    printf("\nPlease Enter Valid Choice ..");
		}
		
	}	
	
	return 0;
}