#include<stdio.h>
#include<string.h>
int main()
{
	int s1 = 0;
	int s2=0;
	int s3=0;
	int s4=0;
	int len=0;
	char str[100];
	printf("������һ���ַ���\n");
	gets(str);
	len=strlen(str);
    for(int i = 0; i < len; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z') s1++;
		if(str[i]>='A' && str[i]<='Z') s2++;
		if(str[i]>='0' && str[i]<='100') s3++;
		if(str[i]=' ') s4++;
	}
	 printf("Сд��ĸһ����%d,��д��ĸһ����%d,������%d,�ո���%d��\n",s1,s2,s3,s4);
	 return 0;
	
	
}
