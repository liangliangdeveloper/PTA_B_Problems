#include <stdio.h>

int main()
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	for(int i=1;i<=(n+1)/2;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1||i==(n+1)/2||j==1||j==n)
			    printf("%c",c);
			else
			    printf(" ");
		}
		printf("\n");
	}
	return 0;
 } 
