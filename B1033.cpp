#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int letter[26];
int number[10];
int sign[4];     //0=_,1=,,2=,.3=-
int shift=0;

char broken[100010];
char input[100010];

int main(){
	memset(letter,0,sizeof(letter));
	memset(number,0,sizeof(number));
	memset(sign,0,sizeof(sign));
	cin.getline(broken,100010);
	int blen=strlen(broken);
	for(int i=0;i<blen;i++){
		//printf("%d\n",broken[i]);
		if(broken[i]>='A'&&broken[i]<='Z'){
			letter[broken[i]-'A']=1;
		}
		if(broken[i]>='0'&&broken[i]<='9'){
			number[broken[i]-'0']=1;
		}
		if(broken[i]=='+') shift=1;
		if(broken[i]=='_') sign[0]=1;
		if(broken[i]==',') sign[1]=1;
		if(broken[i]=='.') sign[2]=1;
		if(broken[i]=='-') sign[3]=1;
	}
	scanf("%s",input);
	getchar();
	int ilen=strlen(input);
	for(int i=0;i<ilen;i++){
		if(input[i]>='a'&&input[i]<='z'&&letter[input[i]-'a']==0) printf("%c",input[i]);
		if(input[i]>='A'&&input[i]<='Z'&&letter[input[i]-'A']==0 && shift==0) printf("%c",input[i]);
		if(input[i]>='0'&&input[i]<='9'&&number[input[i]-'0']==0) printf("%c",input[i]);
		if(input[i]=='_'&&sign[0]==0) printf("%c",input[i]);
		if(input[i]==','&&sign[1]==0) printf("%c",input[i]);
		if(input[i]=='.'&&sign[2]==0) printf("%c",input[i]);
		if(input[i]=='-'&&sign[3]==0) printf("%c",input[i]);
	}
	printf("\n");
	return 0;
}
