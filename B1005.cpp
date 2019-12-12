#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int num[10000];
int nget[10000];

void check(int n){
	while(n!=1){
		num[n]++;
		if(n%2 == 0) n/=2;
		else n=(3*n+1)/2;
	}
}

bool cmp(int a,int b){
	return a>b;
}

int main(){
	memset(num, 0, sizeof(num));
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &nget[i]);
		check(nget[i]);
	}
	
	sort(nget,nget+n,cmp);
	
	bool first = true;
	for(int i = 0; i < n; i++){
		if(num[nget[i]]==1){
			if(!first) printf(" ");
			first = false;
			printf("%d",nget[i]);
		}
	}
	return 0;
}
