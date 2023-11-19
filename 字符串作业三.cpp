#include <stdio.h>
#include <string.h>

int main(){
	// strtok()函数（str,tarStr1）
	char str[100];
	int count = 0;
	printf("请输入一个字符串:\n");
	gets(str); 
	char* tarStr = strtok(str,"123");
	while(tarStr) {
		printf("%s\n",tarStr); 
		tarStr = strtok(NULL,"123");
		count++;
	}
	if( str[strlen(str)-2] == '1' && str[strlen(str)-1] == '2' && str[strlen(str)]== '3') {
		count++;
	}
	printf("%d\n",strlen(str));
	printf("%d",count - 1); 
	return 0;
}

