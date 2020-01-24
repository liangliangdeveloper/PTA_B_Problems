#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	int x,y,max,min,replace;
	scanf("%d %d %d %d %d",&x,&y,&min,&max,&replace);
	int color;
	for(int i = 0; i < x;i++){
		for(int j = 0; j < y; j++){
			scanf("%d",&color);
			color = (color >= min && color <= max)? replace:color;
			printf("%03d",color);
			if(j != y-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
