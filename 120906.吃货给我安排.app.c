#include<stdio.h>
#include<string.h>
	void main(){
	char a[30];
	char b[]="春节";
	char c[]="端午节";
	char d[]="中秋节";
	char e[]="元宵节";

		printf("请问今天是什么节日?\n");
		scanf("%d",&a);

	if(strcmp(a,b)){
	printf("给我安排饺子!");
	}

	else if(strcmp(a,c)){
	printf("给我安排粽子!");
	}

	else if(strcmp(a,d)){
	printf("给我安排月饼!");
	}

	else if(strcmp(a,e)){
	printf("给我安排元宵!");
	}

	else{
	printf("查不到结果!请重新输入!");
	}
}

	//疑问点:char a[30]与strcmp(a,b)
