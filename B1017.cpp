#include <stdio.h>
#include <string.h>
using namespace std;

struct bign{
	int d[1005];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
};

bign divide(bign a,int b, int &r){
	bign c;
	c.len=a.len;
	for(int i=a.len-1;i>=0;i--){
		r=r*10+a.d[i];
		if(r<b) c.d[i]=0;
		else {
			c.d[i]=r/b;
			r=r%b;
		}
	}
	while(c.len-1>=1&&c.d[c.len-1]==0){
		c.len--;
	}
	return c;
}

bign change(char str[]){
	bign a;
	a.len = strlen(str);
	for(int i=0;i<a.len;i++) {
		a.d[i]=str[a.len-i-1]-'0';
	}
	return a;
}

int main(){
	char A[1005];
	int B;
	scanf("%s",A);
	scanf("%d",&B);
	bign a = change(A);
	int r=0;
	bign q = divide(a,B,r);
	for(int i=q.len-1;i>=0;i--){
		printf("%d",q.d[i]);
	}
	printf(" ");
	printf("%d",r);
	return 0;
}
