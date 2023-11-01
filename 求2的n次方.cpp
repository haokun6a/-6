#include<stdio.h>
#include<math.h>
float aaa()
{
	float num;
	int n;
	scanf("%d",&n);
	num = pow(2,n);
	return num;
}
int main()
{
	float lll;
	lll=aaa();
	printf("%f",lll);
	return 0;
}
