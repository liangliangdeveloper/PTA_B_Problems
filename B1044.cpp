#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

char low[14][5]= {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
char high[13][5]= {"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};


int main() {
	int n;
	string s;
	scanf("%d",&n);
	getchar();
	for(int i = 1; i<=n; i++) {
		getline(cin,s);
		//getchar();
		int len=s.length();
		if(s[0]>='0'&&s[0]<='9') {
			int x=0;
			for(int i = 0; i<len; i++) {
				x = x*10+(s[i]-'0');
			}
			if(x<13) {
				printf("%s\n",low[x]);
			} else {
				int highn = x / 13;
				int lown =  x % 13;
				if(lown!=0)
                printf("%s %s\n",high[highn-1],low[lown]);
                else
                printf("%s\n",high[highn-1]);
			}
		} else {
			string highl="";
			string lowl="";
			if(len <= 4){
				for(int i = 0;i<14;i++){
					if(s==low[i])
						{
							printf("%d\n",i);
							break;
						}}
				for(int i = 0;i<13;i++){
					if(s==high[i])
						{
							printf("%d\n",(i+1)*13);
							break;
						}
				
			} }else {
				int pause;
				int x = 0;
				for(int i=0;i<=len;i++){
					if(s[i]==' '){
						pause = i;
						break;
					}
					highl += s[i];
				}
				for(int i = pause+1;i<len;i++){
					lowl +=s[i];
				}
				for(int i=0;i<=13;i++){
					if(highl==high[i]){
						x += (i+1)*13;
						break;
					}
				}
				for(int i=0;i<=14;i++){
					if(lowl==low[i]){
						x += i;
						break;
					}
				}
				printf("%d\n",x);
			}
		}
	}
	return 0;
}
