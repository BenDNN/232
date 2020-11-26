#include<stdio.h>
void main(){
	int i,n=0;
	for(i=2;i<=1024;i=i+2)
	{
	printf("%d",i);
	n++;
	
	if(n%10==0){
	printf("");
	}
	printf("\n");

}
}
