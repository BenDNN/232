#include<stdio.h>
#include<windows.h>
void main(){
	 
		int n=1;
		printf("欢迎使用虫小军版秒表计数器:\n");
	    while(1){

		Sleep(3000);
		printf("%d秒过去了喂!还不来我走了!...\n",n);

		n++;
}
}
