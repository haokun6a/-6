#include <stdio.h>
#include <string.h>

void cal()
{
	char str[100];
	int len = 0;// �ַ�����changdu 
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	int s4 = 0;
	printf("������һ���ַ���\n");
	gets(str);
	// �ȼ���gets(str);
	len = strlen(str);
	// while(str[0] != '\0'){len++} 
	// for(; str[0] != '\0';){len++;}
	for(int i = 0; i < len; i++){
		if(str[i] > 'a' && str[i] < 'z') s1++;
		if(str[i]>'A' && str[i]<'Z') s2++;
		if(str[i]>='0' && str[i]<'100') s3++;
		if(str[i]=' ') s4++;
		
		 
    }
    printf("Сд��ĸһ����%d,��д��ĸһ����%d,������%d,�ո���%d��\n",s1,s2,s3,s4);
}
	
int main() 
{
	cal();
	return 0;
}

