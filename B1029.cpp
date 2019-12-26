#include<stdio.h>
#include<string.h>
using namespace std;

int letter[26];
int num[10];
int under=0;

int main(){
	char origin[100];
	char pre[100];
	memset(letter, 0, sizeof(letter));
	memset(num, 0, sizeof(num));
	scanf("%s", origin);
	getchar();
	scanf("%s", pre);
	int olen = strlen(origin);
	int plen = strlen(pre);
	int j = 0;
	for(int i = 0; i < olen ; i++){
		if(origin[i]!=pre[j]){
			if(origin[i]>='A' && origin[i]<='Z'&&letter[origin[i]-'A']==0){
				printf("%c",origin[i]);
				letter[origin[i]-'A']++;
			}
			if(origin[i]>='a' && origin[i]<='z'&&letter[origin[i]-'a']==0){
				printf("%c",origin[i]-'a'+'A');
				letter[origin[i]-'a']++;
			}
			if(origin[i]>='0' && origin[i]<='9'&&num[origin[i]-'0']==0){
				printf("%c",origin[i]);
				num[origin[i]-'0']++;
			}
			if(origin[i]=='_'&&under==0){
				printf("_");
				under++;
			}
		}
		else if(j<=plen) j++;
	}
	return 0;
}
