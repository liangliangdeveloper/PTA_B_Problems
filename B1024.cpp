#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

char numstring[10010];
queue<int> num;
int  coe = 0;
bool pos;

int main(){
	scanf("%s", numstring);
	int len = strlen(numstring);
	
	if(numstring[0]=='+') pos = true;
	else pos = false;
	// 数据处理 
	int j = 0;
	bool flag = true;
	bool poscoe;
	for(int i = 1; i < len; i++)
	{
		if(numstring[i]=='E') {
			flag = false;
			continue;
		}
		if(numstring[i]=='.') continue;
		if(flag){
			num.push(numstring[i]-'0');
			j++;
		} else {
			if(numstring[i]=='+') poscoe = true;
			else if(numstring[i]=='-') poscoe = false;
			else
			coe = coe * 10 + (numstring[i]-'0');
		}
	}
	//printf("%d", coe);
	coe = poscoe? coe:-coe;
	//输出控制
	//0的删除 
	while(num.front()==0){
		num.pop();
		coe--;
	}
	poscoe = coe>=0? true:false;  //更新poscoe
	if(!poscoe) coe = -coe;       //取绝对值 
	
	//printf("%d",coe);
	if(num.empty()) printf("0");
	if(!pos) printf("-");
	if(!poscoe){
		printf("0.");
		for(int i=1;i<=coe-1;i++){
			printf("0");
		}
		while(!num.empty()){
			printf("%d",num.front());
			num.pop();
		}
	} else {
		while(!num.empty()){
			printf("%d",num.front());
			num.pop();
			if(coe == 0 && !num.empty()) printf(".");
			coe --;
		}
		if(coe >= 0){
			for(int i = 0;i<=coe;i++){
				printf("0");
			}
		}
	}
	
	return 0;
}


