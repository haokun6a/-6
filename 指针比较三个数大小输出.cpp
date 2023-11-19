#include<stdio.h>
void swap(int* p1,int *p2,int *p3)
{
	int temp;
	if(*p1>*p2)
	{
		temp=*p2;
		*p2=*p1;
		*p1=temp;
	}
	else if(*p2>*p3)
	{
		temp=*p3;
		*p3=*p2;
		*p2=temp;
	}
	else if(*p3>*p1)
	{
		temp=*p1;
		*p1=*p3;
		*p3=temp;
	}
	
}
int main()
{
	int a,b,c;
	int* p1;
	int* p2;
	int* p3;
	p1=&a;
	p2=&b;
	p3=&c;

	scanf("%d %d %d",&a,&b,&c);
	swap(p1,p2,p3);
	printf("%d %d %d",a,b,c);
	return 0;
}
