#include<stdio.h>
#include<string.h>

int main()
{
	char input[85];
	char word[85];
	gets(input);
	//printf("%s",input);
	int len=strlen(input);
	//printf("%d",len)
	int p=0;
	for(int i=len-1;i>=0;i--)
	{
		if(input[i]==' ')
		{
			for(int j=p-1;j>=0;j--)
			  printf("%c",word[j]);
			printf(" ");
			p=0;
			continue;
		}	
		word[p]=input[i];
		p++;
		if(i==0)
		{
			for(int j=p-1;j>=0;j--)
			  printf("%c",word[j]);
			p=0;
			continue;
		}
	
	}
 } 
