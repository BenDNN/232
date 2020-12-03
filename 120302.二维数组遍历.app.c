#include<stdio.h>
void main(){
	int i,n;
	int array[]={2021,2022,2023,2024,2025,2026};
	int array2d[2][3]={
		{1,2,3},
		{4,5,6}
	};
	for(i=0;i<2;i++){
		for(n=0;n<3;n++){
	printf("%d ",array2d[i][n]);
}
		printf("\n");
}
}
