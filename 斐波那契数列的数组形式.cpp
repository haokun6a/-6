#include<stdio.h>
int main(){
	int arr[20] = {0};
	arr[0] = 1;
	arr[1] = 1;
	for(int index = 2;index < 20; index++){
		arr[index] = arr[index - 1] + arr[index - 2];
	}// 初始化 
	for(int i = 0; i < 20; i++){
		printf("%d\n",arr[i]);
	}// 数组的遍历 
	return 0;
}



