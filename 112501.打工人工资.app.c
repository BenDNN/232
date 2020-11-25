#include<stdio.h>
void main(){

	int n;
	scanf("%d",&n);

		if(n<=100&&n>=0){
		printf("贫困打工人\n");
		}

		else if(n<=1000&&n>=101){
		printf("一般打工人\n");
		}

		else if(n<=20000&&n>=1001){
		printf("土豪打工人\n");
		}	
	
		else{
		printf("输入有误,请重新输入\n");
		}

}
