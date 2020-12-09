#include<stdio.h>
    void main(){
    char a;
	printf("欢迎使用吃货小程序!吃货的日子总是被安排的明明白白!请问今天的是什么日子?\n");
	scanf("%d",&a);

	if("春节"){
	printf("给我安排饺子!");
	}

	else if("端午节"){
	printf("给我安排粽子!");
	}
	else if("中秋节"){
	printf("给我安排月饼!");
	}
	else if("元宵节"){
	printf("给我安排元宵!");
	}
	else{
	printf("请输入以桑节日!比如:春节.端午节.中秋节.元宵节!");
	}
	}
