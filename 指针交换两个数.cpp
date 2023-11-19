#include<stdio.h>
void exchange(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	exchange(&a,&b);
	printf("%d %d",a,b);
	return 0;
	
}
