#include<stdio.h>
void lll(int n,int m)
{
	int i,j;
	for(i=1;i<=n;i++){
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%d\t",i,j,i*j);
		}
		
	}

}
int main()
{
	lll(9,9);
	return 0;
}
