#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int ride[100010];

bool cmp(int a,int b){
	return a > b;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&ride[i]);
	}
	bool print = false;
	sort(ride,ride+n,cmp);
	for(int i = n;i >= 1;i--){
		if(i<ride[i-1]){
			printf("%d",i);
			print = true;
			break;
		}
	}
	if(!print) printf("0");
	return 0;
} 
