#include<stdio.h>
#include<string.h>
using namespace std;

int color[10+26+26];

int tonumber(char n){
	if(n>='0'&&n<='9') return (n-'0');
	if(n>='a'&&n<='z') return (n-'a'+10);
	if(n>='A'&&n<='Z') return (n-'A'+10+26);
}


int main(){
	char s[1010];
	bool result = true;
	memset(color,0,sizeof(color));
	scanf("%s",s);
	int len = strlen(s);
	for(int i=0;i<len;i++){
		color[tonumber(s[i])]++;
	}
	scanf("%s",s);
	len = strlen(s);
	for(int i=0;i<len;i++){
		color[tonumber(s[i])]--;
	}
	for(int i=0;i<10+26+26;i++){
		if(color[i]<0){
			result = false;
			break;
		}
	}
	int sum = 0;
	if(result){
		printf("Yes ");
		for(int i=0;i<10+26+26;i++)
			sum += color[i];
		printf("%d",sum);
	} else {
		printf("No ");
		for(int i=0;i<10+26+26;i++)
		{
		    if(color[i]<0)
			sum += color[i];
			}
		printf("%d",-sum);
	}
}
