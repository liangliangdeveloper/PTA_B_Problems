#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	int maybe = 0, empty = 0;
	int n,d;
	double e;
	scanf("%d %lf %d",&n,&e,&d);
	for(int i = 1; i <= n; i++){
		int tmp = 0;
		int day;
		double use;
		scanf("%d",&day);
		for(int j = 1; j <= day; j++){
			scanf("%lf",&use);
			if(use<e){
				tmp++;
			}
		}
		if(tmp>day/2 && day>d) empty++;
		if(tmp>day/2 && day<=d) maybe++;
	}
	printf("%.1f%% %.1f%%",((double)maybe/(double)n)*100,((double)empty/(double)n)*100);
	return 0;
} 
