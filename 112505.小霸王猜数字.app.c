#include<stdio.h>
void main(){

		int key=5;
		int user_num;
		printf("友情提示:请猜数字0-10\n");

		scanf("%d",&user_num);

		if(user_num==5){
		printf("恭喜小主人!您猜对了!\n");
		}

		else if(user_num>key){
		printf("小主人您猜的太大了!\n");
		}

		else{
		printf("这...也不会这么小!\n");
		}
}
