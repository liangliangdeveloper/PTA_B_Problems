#include<stdio.h>
#include<string.h>
using namespace std;

int score[100];

int main(){
	memset(score,0,sizeof(score));
	int n;
	scanf("%d",&n);
	int s;
	for(int i=1;i<=n;i++){
		scanf("%d",&s);
		score[s]++;
	}
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&s);
		printf("%d",score[s]);
		if(i!=n){
			printf(" ");
		}
	}
	return 0;
}
