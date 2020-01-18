#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct student{
	char name[10];
	int height;
}stu[1010];

bool cmp(student a,student b){
	if(a.height!=b.height) return a.height<b.height;
	else return strcmp(a.name,b.name) > 0;
} 

int main(){
	int n;
	int line;
	scanf("%d %d",&n,&line);
	getchar();
	for(int i=0;i<n;i++){
		scanf("%s %d",stu[i].name,&stu[i].height);
		getchar();
	}
	sort(stu,stu+n,cmp);
	int num = n/line;
	int plus = n-(n/line*(line));
	for(int i=0;i<line;i++){
		int start = n - 1 - i * num;
		int end = n - (i + 1)* num - plus;
		if(i != 0) start -= plus;
		int person = start - end + 1;
		//printf("%d %d %d\n",start,end,person);
		if(person%2==0){
			for(int j = end;j<=start-1;j+=2){
				printf("%s", stu[j].name);
				printf(" ");
				}
			for(int j = start; j>=end+1;j-=2){
				printf("%s",stu[j].name);
				if(j!=end+1)
					printf(" ");
			}
		} else {
			for(int j = end+1;j<=start-1;j+=2){
				printf("%s", stu[j].name);
				printf(" ");
				}
			for(int j = start; j>=end;j-=2){
				printf("%s",stu[j].name);
				if(j!=end)
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
