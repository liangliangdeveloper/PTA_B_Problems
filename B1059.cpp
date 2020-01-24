#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int award[10005];

bool su(int n){
	for(int i = 2;i <= sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}

int main(){
	memset(award,0,sizeof(award));
	int n;
	scanf("%d",&n);
	int tmp;
	for(int i=1;i<=n;i++){
		scanf("%d",&tmp);
		if(i==1) award[tmp] = 3;
		else if(su(i)) award[tmp] = 2;
		else award[tmp] = 1;
	}
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&tmp);
		if(award[tmp]==0) printf("%04d: Are you kidding?\n",tmp);
		else if(award[tmp] == 1) {
			printf("%04d: Chocolate\n",tmp);
			award[tmp]=4;
		} else if(award[tmp] == 2) {
			printf("%04d: Minion\n",tmp);
			award[tmp]=4;
		} else if(award[tmp] == 3) {
			printf("%04d: Mystery Award\n");
			award[tmp]=4;
		} else if(award[tmp] == 4) {
			printf("%04d: Checked\n",tmp);
		} 
	}
	return 0;
}
