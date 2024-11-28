#include<stdio.h>
int main(){
	int num1;
	int num2;
	int sum;
	scanf("%d",&num1);
	scanf("%d",&num2);
	if(num1>num2){
		sum=num1-num2;
		printf("num1 greater than num2 \n");
		printf("%d",sum);
	}else{
		sum=num2-num1;
		printf("num2 greater than num1 \n");
		printf("%d",sum);
	}
}
