#include<stdio.h>

int main(){
	int n,i;
	i=0;
	int num[10000];
	while(scanf("%d",&n)!=EOF)
	{
		num[i]=n;
		i++;
	}
	for(int j=0;j<i;j+=2)
	{
       if(num[j+1]==0) {
           num[j]=0;
           num[j+1]=0;
       }
       else {
	   num[j]*=num[j+1];
	   num[j+1]-=1;
       }
	}
	for(int j=0;j<i-2;j++)
	{
		printf("%d",num[j]);
        if(j!=i-3)
		printf(" ");
	}
    if(num[i-3]!=0){
        printf(" 0 0");
    }
}
