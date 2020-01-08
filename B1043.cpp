#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int times[8];

int main(){
	string s;
	memset(times,0,sizeof(times));
	getline(cin,s);
	int len = s.length();
	for(int i=0;i<len;i++){
		switch(s[i]){
			case 'P': times[0]++; break;
			case 'A': times[1]++; break;
			case 'T': times[2]++; break;
			case 'e': times[3]++; break;
			case 's': times[4]++; break;
			case 't': times[5]++; break;
			default : break;
		}
	}
	while((times[0]+times[1]+times[2]+times[3]+times[4]+times[5])!=0){
		if(times[0]>0) {
			printf("P");
			times[0]--;
		}
		if(times[1]>0) {
			printf("A");
			times[1]--;
		}
		if(times[2]>0) {
			printf("T");
			times[2]--;
		}
		if(times[3]>0) {
			printf("e");
			times[3]--;
		}
		if(times[4]>0) {
			printf("s");
			times[4]--;
		}
		if(times[5]>0) {
			printf("t");
			times[5]--;
		}
	}
	return 0;
}
