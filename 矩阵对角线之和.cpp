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
	}//��ʼ����ά���� 
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}// ��ӡ��ά���� 
	
	for(i = 0; i<3; i++){
		sum1 = sum1 + a[i][i]; 
	}// ��һ���Խ��ߵĺ�
	
	for(i = 0; i<3; i++){
		sum2 = sum2 + a[i][2-i];
	}// �ڶ����Խ��ߵĺ� 
	
	printf("�����Խ��ߵĺ���%d",sum1 + sum2);
	return 0; 
}
