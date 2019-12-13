#include <stdio.h>
#include <string.h>
using namespace std;

int num[10010];
int i=0;
void change(int n,int b){
	if(n==0) {
		printf("0"); 
		return;
		}
	while(n!=0){
		num[i]=n % b;
		n /= b;
		i++;
	}
	int result = 0;
	for(int j=i-1; j>=0;j--){
		printf("%d",num[j]);
	}
	return;
}

int main(){
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	change(a+b,c);
	return 0;
}
