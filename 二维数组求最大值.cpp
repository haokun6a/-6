#include<stdio.h>
int main()
{
	float a[3][4];
	int i,j,maxindex1,maxindex2;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]>a[i][j+1])
			{
				maxindex1=i;
				maxindex2=j;
			}
		}
	}
	printf("%.2f",a[maxindex1][maxindex2]);
	return 0;
}
