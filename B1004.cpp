#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	char name[15];
	char num[15];
	int score;
	int max=0;
	int min=100;
	char Mname[15];
	char Mnum[15];
	char mname[15];
	char mnum[15];
	for(int i=1;i<=n;i++){
		scanf("%s",name);
	    scanf("%s",num);
		scanf("%d",&score);
		if(score>=max)
		{
			strcpy(Mname,name);
			strcpy(Mnum,num);
			max=score;
		}
		if(score<=min)
		{
			strcpy(mname,name);
			strcpy(mnum,num);
			min=score;
		}
	}
	printf("%s %s\n",Mname,Mnum);
	printf("%s %s\n",mname,mnum);
	return 0;
} 
