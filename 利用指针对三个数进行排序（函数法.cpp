#include <stdio.h>

void swap (int *p1, int *p2) {
    // 请在此处编写代码，实现交换功能
    int temp;
    if(*p1>*p2)
    {
        temp=*p1;
        *p1=*p2;
        *p2=temp;
    }
    
}

int main () {
	int n1, n2, n3, *p1, *p2, *p3;
    scanf("%d %d %d", &n1, &n2, &n3);
    // 请在此处编写代码，实现 3 个整数从小到大排序
    swap(&n1,&n2);
    swap(&n1,&n3);
    swap(&n2,&n3);
    printf("%d %d %d",n1,n2,n3);
    
    
    return 0;
}
