#include<stdio.h>
int main()
{
	int i,max,a[10];
	for(i=0;i<10;i++)
    {
	scanf("%d",&a[i]);
    } 
	for(i=0;i<10;i++)
	{
		if(a[i]>=a[i+1])
		{
			max=i+1;
		}
	}
	printf("%d",max);
	return 0;
}
