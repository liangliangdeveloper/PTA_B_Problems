#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

int num[100010];
int left[100010];
int right[100010];
int final=0;
int pos[100010];

int main(){
	int n;
	memset(left,0,sizeof(left));
	memset(right,0,sizeof(right));
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	int max=0;
	int min = 1000005000;
	for(int i=n-1;i>=0;i--){
		if(num[i]<min){
			min=num[i];
			right[i]++;
		}
	}
	for(int i=0;i<n;i++){
		if(num[i]>max){
			max=num[i];
			left[i]++;
		}
	}
	/*for(int i=0;i<il;i++){
		for(int j=0;j<ir;j++){
			if(left[i]==right[j])
				{
				result.push_back(left[i]);
				break;
				}
		}
	}*/
	//printf("%d %d\n",il,ir); 
	//sort(left,left+il);
	//sort(right,right+ir);
	/*for(int i=0;i<il;i++){
		printf("%d",left[i]);
	}
	printf("\n");
	for(int i=0;i<ir;i++){
		printf("%d",right[i]);
	}*/
	
	for(int i = 0; i<n ;i++){
		if(left[i]>0&&right[i]>0){
			pos[final]=num[i];
			final++;
		}
	}
	
	printf("%d\n",final);
	for(int i=0;i<final;i++){
		printf("%d",pos[i]);
		if(i!=final-1){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
