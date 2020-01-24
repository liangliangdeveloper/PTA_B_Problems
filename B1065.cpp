#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

bool cmp(int a,int b){
	return a<b;
}

int couple[100010];
int ishave[100010];
int person[50010];

int main(){
	memset(couple,-1,sizeof(couple));
	memset(ishave,0,sizeof(ishave));
	int n,a,b;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d %d",&a,&b);
		couple[a]=b;
		couple[b]=a;
	}
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d",&a);
		ishave[a]=1;
		person[i-1]=a;
	}
	sort(person,person+n,cmp);
	bool print = false;
	int sum = 0;
	for(int i=0;i<n;i++){
		if(couple[person[i]]==-1 || (couple[person[i]]!=0 && ishave[couple[person[i]]]==0)){
			sum++;
		}
	}
	printf("%d\n",sum);
	for(int i=0;i<n;i++){
		if(couple[person[i]]==-1 || (couple[person[i]]!=0 && ishave[couple[person[i]]]==0)){
			if(print) printf(" ");
			printf("%05d",person[i]);
			print = true;
		}
	}
	return 0;
}
