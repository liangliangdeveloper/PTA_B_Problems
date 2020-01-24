#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

string s;

int main(){
	getline(cin,s);
	int sum;
	int len = s.length();
	for(int i=0;i<len;i++){
		if(s[i]>='A'&&s[i]<='Z'){
			sum += s[i]-'A'+1;
		}
		if(s[i]>='a'&&s[i]<='z'){
			sum += s[i]-'a'+1;
		}
	}
	int result[2]={0,0};
	while(sum!=0){
		result[sum%2]++;
		sum /=2;
	}
	printf("%d %d",result[0],result[1]);
	return 0;
}
