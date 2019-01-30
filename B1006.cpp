#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int num[3];
	num[0]=n/100;
	n=n%100;
	num[1]=n/10;
	n=n%10;
	num[2]=n;
	for(int i=0;i<num[0];i++)
	{
		printf("B");
	}
	for(int i=0;i<num[1];i++)
	{
		printf("S");
	}
	for(int i=1;i<=num[2];i++)
	{
		printf("%d",i);
	}
}
