#include<stdio.h>
void sum(int begin,int end)
{
	int i;
	int sum=0;
	for(i=begin;i<=end;i++)
	{
		sum += i;
	}
	printf("%d��%d�ĺ���%d\n",begin,end,sum);
}
int main()
{
	sum(1,10);
	sum(20,50);
	sum(99,199);
	
	return 0;
}

