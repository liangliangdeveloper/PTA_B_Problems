#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

bool cmp(char a,char b){
	return a<b;
}

struct question{
	int score;
	int answer;
	int ranswer;
	int wrong;
	char cans[7];
}quiz[110];

int main(){
	int n,m;
	int max = 0;
	scanf("%d %d",&n,&m);
	for(int i = 0;i<m;i++){
		quiz[i].wrong = 0;
		scanf("%d %d %d",&quiz[i].score,&quiz[i].answer,&quiz[i].ranswer);
		for(int j=0;j<quiz[i].ranswer;j++){
			getchar();
			scanf("%c",&quiz[i].cans[j]);
		}
		sort(quiz[i].cans,quiz[i].cans+quiz[i].ranswer,cmp);
		quiz[i].cans[quiz[i].ranswer]='\0';
	}
	getchar();
	//printf("%s",quiz[3].cans);
	char tmp[7];
	int t_score = 0;
	int t_answer;
	char t_char;
	for(int i = 0;i<n;i++){
		t_score = 0;
		for(int j = 0;j<m;j++){
			getchar();
			scanf("%d",&t_answer);
			//printf("%d",m);
			for(int k = 0; k < t_answer;k++){
				getchar();
				scanf("%c",&tmp[k]);
			}
			sort(tmp,tmp+t_answer,cmp);
			tmp[t_answer]='\0';
			//printf("%d:$%s\n",j,tmp);
			getchar();
			getchar();
			if(strcmp(tmp,quiz[j].cans)==0){
				t_score += quiz[j].score; 
			} else {
				quiz[j].wrong++;
				if(quiz[j].wrong > max){
					max = quiz[j].wrong;
				}
			}
		}
		printf("%d\n",t_score);
	}
	if(max == 0) printf("Too simple\n");
	else {
		printf("%d",max);
		for(int i = 0;i<m;i++){
			if(quiz[i].wrong == max){
				printf(" %d",i+1);
			}
		}
	}
	return 0;
}
