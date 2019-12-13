#include <stdio.h>
#include <string.h>
using namespace std;

int num[10];

int main(){
	memset(num,0,sizeof(num));
	char n[1010];
	scanf("%s",n);
	int len = strlen(n);
	for(int i=0;i<len;i++){
		num[n[i]-'0']++;
	}
	for(int i=0;i<=9;i++){
		if(num[i]!=0) printf("%d:%d\n",i,num[i]);
	}
	return 0;
}
