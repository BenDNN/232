#include<stdio.h>
void main(){
	int hour,min,sec;
	printf("输入秒,转换为时分秒程序\n");
	scanf("%d",&sec);
	hour=sec/3600;
	min=sec/60%60;
	sec%=60;
		
	if(hour<=23&&min<=59&&sec<=59){
	printf("%02d:%02d:%02d\n",hour,min,sec);
	}
	else{
	printf("你的数值超过范围字样\n");
	}
}
