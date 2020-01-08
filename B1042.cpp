#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int letter[30];

int main(){
	string c;
	memset(letter,0,sizeof(letter));
	getline(cin,c);
	int len=c.length();
	for(int i=0;i<len;i++){
		if(c[i]>='a'&&c[i]<='z'){
			letter[c[i]-'a']++;
		}
		if(c[i]>='A'&&c[i]<='Z'){
			letter[c[i]-'A']++;
		}
	}
	int max=0, maxp;
	for(int i=0;i<26;i++){
		if(letter[i]>max){
			max=letter[i];
			maxp=i;
		}
	}
	printf("%c %d",maxp+'a',letter[maxp]);
	return 0;
}
