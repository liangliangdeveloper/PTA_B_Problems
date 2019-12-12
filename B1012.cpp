#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	int N;
	int a[5],flag[5];
	memset(a,0,sizeof(a));
	memset(flag,0,sizeof(flag));
	scanf("%d", &N);
	int tmp;
	while(N--){
		scanf("%d",&tmp);
		if(tmp%10==0)
		{
			a[0]+=tmp;
			flag[0]++;
		}
		if(tmp%5==1)
		{
			if(flag[1]%2==0)
				a[1]+=tmp;
			else
				a[1]-=tmp;
			flag[1]++;
		}
		if(tmp%5==2)
		{
			a[2]++;
			flag[2]++;
		}
		if(tmp%5==3)
		{
			a[3]+=tmp;
			flag[3]++;
		}
		if(tmp%5==4)
		{
			if(tmp>a[4])
				a[4]=tmp;
			flag[4]++;
		}
	}
	if(flag[0]==0) printf("N ");
	else printf("%d ",a[0]);
	if(flag[1]==0) printf("N ");
	else printf("%d ",a[1]);
	if(flag[2]==0) printf("N ");
	else printf("%d ",a[2]);
	if(flag[3]==0) printf("N ");
	else printf("%.1f ",double(a[3])/double(flag[3]));
	if(flag[4]==0) printf("N");
	else printf("%d",a[4]);
	
	return 0;
}
