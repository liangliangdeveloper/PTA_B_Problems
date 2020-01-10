#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

int score[1010];
vector<int> teams;

int main(){
	int n;
	memset(score,0,sizeof(score));
	int team,id,s;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d-%d %d",&team,&id,&s);
		score[team]+=s;
	}
	int max=0,maxpos;
	for(int i=0;i<=1000;i++){
		if(score[i]>max){
			max = score[i];
			maxpos = i;
		}
	}
	printf("%d %d",maxpos,max);
	return 0;
}
