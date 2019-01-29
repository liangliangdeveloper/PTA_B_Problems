#include <stdio.h>
#include <string.h>

bool StringPass(char str[]);
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char str[100];
	for(int i=1;i<=n;i++)
	{
	   scanf("%s",str);
	   if(StringPass(str))
	   {
	   	printf("YES\n");
	   }
	   else
	   {
	   	printf("NO\n");
	   }
	}
	return 0;
} 

bool StringPass(char str[]){
	int len=strlen(str);
	int A[3]={0,0,0};
	int flag=0;
	for(int i=0;i<len;i++)
	{
		if((str[i]=='P'&&flag==0)||(str[i]=='T'&&flag==1))
		{
		     flag++;
		     continue;
		}
		if(str[i]=='A')
		{
			 A[flag]++;
			 continue;
		}
		return false;
	}
	if(A[1]==1)
	return true;
	if(A[1]==0)
	return false;
	if(A[0]*A[1]==A[2])
	return true;
	else
	return false;
}
