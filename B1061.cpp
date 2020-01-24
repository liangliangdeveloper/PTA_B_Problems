#include<stdio.h>
#include<string.h>
using namespace std;

struct question{
	int score;
	int ans;
}quiz[110];

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i = 0;i < m; i++){
		scanf("%d",&quiz[i].score);
	}
	for(int i = 0;i < m; i++){
		scanf("%d",&quiz[i].ans);
	}
	int s = 0;
	int a;
	for(int i = 0; i < n; i++){
		s = 0;
		for(int j = 0; j < m;j++){
			scanf("%d",&a);
			if(a == quiz[j].ans){
				s += quiz[j].score;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
