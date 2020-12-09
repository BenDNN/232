#include<stdio.h>
void main(){
	int value=91;
int row,column;
int array[9][10]={
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0}
};
        for(row=0;row<=8;row++){
			for(column=0;column<=9;column++){
			value--;
			array[row][column]=value;
			printf("%d ",array[row][column]);
		}
			printf("\n");

		}
}
