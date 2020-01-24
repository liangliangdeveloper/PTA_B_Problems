#include<stdio.h>
#include<string.h>
using namespace std;
int friends[40];

int main(){
	memset(friends,0,sizeof(friends));
	int tmp,n,sum=0;
	int person = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		sum = 0;
		scanf("%d",&tmp);
		while(tmp!=0){
			sum += tmp % 10;
			tmp /= 10;
		}
		friends[sum]++;
		if(friends[sum]==1){
			person ++;
		}
	}
	bool print = false;
	printf("%d\n",person);
	for(int i = 0; i<=38;i++){
		if(friends[i]>=1){
			if(print) printf(" ");
			printf("%d",i);
			print = true;
		}
	}
	return 0;
}
