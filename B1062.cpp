#include<stdio.h>
#include<string.h>
using namespace std;

int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b, a%b); 
}

int main(){
	double a1,a2,b1,b2,a3,b3;
	int mu;
	bool print = false;
	scanf("%lf/%lf %lf/%lf %d",&a1,&a2,&b1,&b2,&mu);
	
	a3 = int(a1*mu/a2);
	//printf("%f",a1);
	b3 = int(b1*mu/b2);
	if(a3>b3){
		int tmp;
		tmp = a3;
		a3 = b3;
		b3 = tmp;
		tmp = a1;
		a1 = b1;
		b1 = tmp;
		tmp = a2;
		a2 = b2;
		b2 = tmp;
	}
	for(int i = a3; i <=b3;i++){
		if(gcd(i,mu)==1 && i > a1*mu/a2 && i < b1*mu/b2){
			if(print)
				printf(" ");
			printf("%d/%d",i,mu);
			print = true;
		}
	}
	return 0;
}
