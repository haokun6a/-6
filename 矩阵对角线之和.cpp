#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	int sum1 = 0;
	int sum2 = 0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}//初始化二维数组 
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}// 打印二维数组 
	
	for(i = 0; i<3; i++){
		sum1 = sum1 + a[i][i]; 
	}// 第一条对角线的和
	
	for(i = 0; i<3; i++){
		sum2 = sum2 + a[i][2-i];
	}// 第二条对角线的和 
	
	printf("两条对角线的和是%d",sum1 + sum2);
	return 0; 
}
