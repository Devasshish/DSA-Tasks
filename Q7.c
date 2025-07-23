//*****
//*   *
//*****
//*
//*

#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		if(i==1 || i==3 ){
			for(j=1;j<=5;j++){
					printf("*");			
			}
			printf("\n");
		}
		else if (i==4 || i==5){
			printf("*\n");
		}
		else{
		
			for(j=1;j<=5;j++){
				if(j!=1 && j!=5){
					printf(" ");
				}
				else{
					printf("*");
				}
				
			}
			printf("\n");
	}
	}
}
