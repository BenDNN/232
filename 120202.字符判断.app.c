#include<stdio.h>
void main(){
	char x;
	printf("字符判断等你你来挑战\n");
	scanf("%c",&x);
			switch(x){
				case 'w':printf("你在点击上键\n");break;
				case 's':printf("你在点击下键\n");break;
				case 'a':printf("你在点击左键\n");break;
				case 'd':printf("你在点击右键\n");break;
				default:printf("请输入指定按键!\n\n");
}
}
