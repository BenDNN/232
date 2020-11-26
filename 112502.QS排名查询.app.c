#include<stdio.h>
void main(){

	int n;
	printf("QS大学排名查询\n");
	printf("请输入排名:\n");

	    while(1){
		scanf("%d",&n);

		if(n==1){
		printf("1.排名第1的大学:北京大学\n");
		}
//或者可以写成		if(n==1){
//					printf("%d.排名第%d的大学:北京大学\n",n,n);
//					}

		else if(n==2){
		printf("2.排名第2的大学:清华大学\n",n,n);
		}

		else if(n==3){
		printf("3.排名第3的大学:复旦大学\n");
		}

		else if(n==4){
		printf("4.排名第4的大学:中国科学技术大学\n");
		}

		else if(n==5){
		printf("5.排名第5的大学:浙江大学\n");
		}

		else if(n==6){
		printf("6.排名第6的大学:上海交通大学\n");
		}

		else if(n==7){
		printf("7.排名第7的大学:南京大学\n");
		}

		else if(n==8){
		printf("8.排名第8的大学:中山大学\n");
		}

		else if(n==9){
		printf("9.排名第9的大学:武汉大学\n");
		}

		else if(n==10){
		printf("10.排名第10的大学:哈尔滨工业大学\n");
		}

		else{
		printf("老铁你的排名太落后了,请输入1-10\n");
		}
		}
}
