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
    printf("����С˳�������������Ϊ:%d %d",a,b);
    return 0;

}
