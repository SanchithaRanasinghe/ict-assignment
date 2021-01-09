#include <stdio.h>
int main(void){
	int y,x;
	int arr[10];// define array
	printf("**Enter your 10 integer value in to array**\n");
	for (x=0;x<10;++x){
		printf("ENTER NUMBER %d - ",x+1);//enter array data
		scanf("%d",&y);
		arr[x]=y;    //store data in to the array
	}
	
	int sum=0;
	for (x=0;x<10;++x){
		sum=sum+arr[x];
	}
	float avg=(float)sum/10;
	printf("SUM = %d\n",sum);
	printf("AVERAGE = %f",avg);
	}


  
 
