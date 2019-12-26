#include<stdio.h>
#include<algorithm>
using namespace std;

int N[1000100];
long long p;

bool cmp(int a,int b){
	return a < b;
}

int main(){
	int n;
	scanf("%d %lld", &n, &p);
	for(int i=0;i<n;i++){
		scanf("%d",&N[i]);
	}
	sort(N,N+n,cmp);
	int head=0;
	int tail=0;
	int max = 0;
	for(head=0;head<n;head++){
		while(N[tail]<=N[head]*p && tail < n) tail++;
	    max = max < tail-head? (tail-head):max;
	    //printf("head:%d tail:%d\n",head,tail); 
	    if(tail==n) break;
	}
	printf("%d", max);
	return 0;
}
