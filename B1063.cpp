#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
	int n = 0;
	double a,b,max=0,tmp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf %lf",&a,&b);
		tmp = sqrt(a*a+b*b);
		if(tmp>max){
			max = tmp;
		}
	}
	printf("%.2f",max);
	return 0;
} 
