#include <stdio.h>
int Even(int a);
int main(){
	int c;
	printf("Enter Your Number -");
	scanf("%d",&c);
	Even(c);
	return 0;
	
}
int Even(int a){
	int b=a%2;
	if (b!=1){
	
		printf("It is an Even number");}
	
	else{
		printf("It is an odd number");
	}
}

