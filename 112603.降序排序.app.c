#include<stdio.h>
void main(){
	
	int a,b,c,i;
	printf("请输入三位数字!我们将为你自动降序排序!\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b){i=a;a=b;b=i;}
	if(a<c){i=a;a=c;c=i;}
	if(b<c){i=b;b=c;c=i;}
	printf("%d,%d,%d\n\n",a,b,c);
}
