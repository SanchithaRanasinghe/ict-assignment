#include <stdio.h>

int main() {
	int max,min; 
	int a,b,c;
	printf("Enter first number -");
	scanf("%d",&a);
	printf("Enter second number -");
	scanf("%d",&b);
	printf("Enter third number -");
	scanf("%d",&c);	
    

    if (a>b & a>c) {
    max=a;}
    if(b>a & b>c) {
    max=b; }
    if(c>a & c>b){
    max=c; }
    printf (" maximum number is %d\n",max); 
    
    if (a<b & a<c) {
    min=a;}
    if(b<a & b<c) {
    min=b; }
    if(c<a & c<b){ 
	min=c; }
    printf (" minimum number is %d\n",min);   
    
    
  } 
 
 
 
