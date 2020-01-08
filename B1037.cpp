#include<stdio.h>
using namespace std;

void sub(int a1,int b1,int c1,int a2, int b2, int c2){
	int a,b,c;
	if(c1<c2){
		if(b1>0){
			b1--;
			c1+=29;
		}
		else{
			a1--;
			b1+=16;
			c1+=29;
		}
	}
	c=c1-c2;
	if(b1<b2){
		a1--;
		b1+=17;
	}
	b=b1-b2;
	a=a1-a2;
	printf("%d.%d.%d",a,b,c);
}

bool bigger(int a1,int b1,int c1,int a2, int b2, int c2){
	if(a1>a2) return true;
	if(a1<a2) return false;
	if(a1==a2){
		if(b1>b2) return true;
		if(b1<b2) return false;
		if(b1==b2) {
			if(c1>=c2) return true;
		    if(c1<c2) return false;
		}
	} 
}

int main(){
	int G_A,S_A,K_A;
	int G_P,S_P,K_P;
	scanf("%d.%d.%d %d.%d.%d",&G_P,&S_P,&K_P,&G_A,&S_A,&K_A);
	if(bigger(G_A,S_A,K_A,G_P,S_P,K_P)){
		sub(G_A,S_A,K_A,G_P,S_P,K_P);
	} else {
		printf("-");
		sub(G_P,S_P,K_P,G_A,S_A,K_A);
	}
	return 0;
}
