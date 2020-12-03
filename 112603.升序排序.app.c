#include<stdio.h>
void main(){
	
	int a,b,c;
	printf("请输入三个数字\n");
	scanf("%d%d%d",&a,&b,&c);

	if(a<b&&a<c){
		if(b<c){
		printf("%d\n%d\n%d\n",a,b,c);
	}
		else{
		printf("%d\n%d\n%d\n",a,c,b);
		}
}
}
