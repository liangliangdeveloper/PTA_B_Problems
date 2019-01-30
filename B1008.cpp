#include <stdio.h>
void move(int num[],int n)
{
	int tmp=num[n-1];
	for(int i=n-1;i>0;i--)
	{
		num[i]=num[i-1];
	}
	num[0]=tmp;
}

int main(){
	int List[101];
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	   scanf("%d",&List[i]);
	m=m%n;
	for(int i=1;i<=m;i++)
	{
		move(List,n);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",List[i]);
		if(i!=n-1)
		printf(" ");
	}
	return 0;
} 
