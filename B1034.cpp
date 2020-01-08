#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;


struct frac{
	long long up,down;
};

long long gcd(long long a,long long b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

frac reduction(frac a){
	frac b;
	if(a.up==0){
		b.down=1;
		b.up = 0;
	} else {
		long long d = gcd(abs(a.up),abs(a.down));
		b.up   = a.up/d;
		b.down = a.down/d;
	}
	if(b.down < 0){
		b.up = -b.up;
		b.down = -b.down;
	}
	return b;
}

frac add(frac a,frac b){
	frac result;
	result.up = a.up * b.down + b.up * a.down;
	result.down = a.down * b.down;
	return reduction(result);
}

frac sub(frac a,frac b){
	frac result;
	result.up = a.up * b.down - b.up * a.down;
	result.down = a.down * b.down;
	return reduction(result);
}

frac mul(frac a,frac b){
	frac result;
	result.up = a.up * b.up;
	result.down = a.down * b.down;
	return reduction(result);
}

frac div(frac a,frac b){
	frac result;
	result.up = a.up * b.down;
	result.down = a.down * b.up;
	return reduction(result);
}

void print(frac a){
	if(a.up < 0) printf("(");
	if(a.down == 1) {
	printf("%lld",a.up);
	if(a.up < 0) printf(")");
	return;
	}
	if(abs(a.down) > abs(a.up)) printf("%lld/%lld",a.up, a.down);
	if(abs(a.down) <= abs(a.up)) {
		long long tmp = int(abs(a.up))%a.down;
		printf("%lld %lld/%lld",a.up/a.down,tmp,a.down);
	}
	if(a.up < 0) printf(")");
	return;
}

int main(){
	frac a,b;
	scanf("%lld/%lld %lld/%lld",&a.up,&a.down,&b.up,&b.down);
	a = reduction(a);
	b = reduction(b);
	//print(a);
	//print(b);
	
	print(a);
	printf(" + ");
	print(b);
	printf(" = ");
	print(add(a,b));
	printf("\n");
	
	print(a);
	printf(" - ");
	print(b);
	printf(" = ");
	print(sub(a,b));
	printf("\n");
	
	print(a);
	printf(" * ");
	print(b);
	printf(" = ");
	print(mul(a,b));
	printf("\n");
	
	print(a);
	printf(" / ");
	print(b);
	printf(" = ");
	if(b.up!=0)
	print(div(a,b));
	else
	printf("Inf");
	printf("\n");
	return 0;
}
