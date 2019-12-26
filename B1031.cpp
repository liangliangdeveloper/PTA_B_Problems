#include<stdio.h>
#include<string.h>
using namespace std;

int power[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int testmap[11]={1,0,10,9,8,7,6,5,4,3,2};

int main(){
	char origin[20];
	int num[20];
	int n;
	scanf("%d",&n);
	bool flag=false;
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%s",origin);
		getchar();
		sum=0;
		for(int i=0;i<18;i++){
			if(origin[i]=='X')
				num[i]=10;
			else num[i]=origin[i]-'0';
			if(i<17) sum=sum+num[i]*power[i];
		}
		sum=sum%11;
		if(testmap[sum]!=num[17]){
			printf("%s\n",origin);
			flag = true;
		}
	}
	if(flag==false) printf("All passed");
	return 0;
}
