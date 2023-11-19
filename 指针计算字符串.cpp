#include<stdio.h>
#include<string.h>
#define N 10

int getlen(char* p)
{
	int len=0;
	while(*p!='\0')
	{
		p++;
		len++;
	}
	return len;
	
}
int main()
{
	char arr[N];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®");
	gets(arr);
	printf("%d",getlen(arr));
	return 0;
}
 
