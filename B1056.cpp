#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	int n;
	int tmp;
	int sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&tmp);
		sum += (tmp*10+tmp)*(n-1);
	}	
	printf("%d",sum);
	return 0;
}
