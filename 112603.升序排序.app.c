#include<stdio.h>
int main(){
	
	int a,b,c,i;
	printf("请输入三个数字,我们将为你自动升序排序!\n");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b){i=a;a=b;b=i;}
	if(a>c){i=a;a=c;c=i;}
	if(b>c){i=b;b=c;c=i;}

	printf("%d\n%d\n%d\n",a,b,c);
	return 0;
}
