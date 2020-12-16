#include<stdio.h>
int myfanction(int x){
	if(x<=0){
	return 0;
	}
	return x+myfanction(x-1);
}

void main(){
	int a;
	printf("      递归求和:!\n");
	printf("请输入一个大于0的整数!\n");
	scanf("%d",&a);
	printf("%d\n",myfanction(a));
}
