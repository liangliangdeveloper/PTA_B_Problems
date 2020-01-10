#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	int n;
	double num,sum;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%lf",&num);
		sum += num*(n-i)*(i+1);
		}
	printf("%.2f\n",sum);
	return 0;
}
