#include<stdio.h>
void lll(float a,float b,float *sum,float *sub,float *mul,float *div)
{
	*sum=a+b;
	*sub=a-b;
	*mul=a*b;
	*div=a/b;
}
int main()
{
	float a=8,b=5,sum,sub,mul,div;
	lll(a,b,&sum,&sub,&mul,&div);
	printf("%f %f %f %f",sum,sub,mul,div);
	return 0;
}
