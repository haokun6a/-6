#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	int num=0; 
	printf("������һ���ַ���\n");
	gets(str1);
	int len=strlen(str1);
	 for(int i=0;i<len;i++)
	 {
	 	if(str1[i]=='1' && str1[i+1]=='2' && str1[i+2]=='3') num++;
	 }
	 printf("123�ĸ�����%d\n",num);
	 return 0;
}
