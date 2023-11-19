#include<stdio.h>
void cmp(int *pmax,int *pmin) {
    int temp;
    if(*pmax<*pmin)
    {
        temp=*pmax;
        *pmax=*pmin;
        *pmin=temp;
    }

}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    cmp(&a,&b);
    printf("按大小顺序输出的两个数为:%d %d",a,b);
    return 0;

}
