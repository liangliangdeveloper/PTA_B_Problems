#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct student{
	char id[18];
	int test;
	int exam;
}stu[1010];

bool cmp(student a,student b){
	return a.test<b.test;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d %d",stu[i].id,&stu[i].test,&stu[i].exam);
	}
	sort(stu,stu+n,cmp);
	int m;
	int tmp;
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&tmp);
		printf("%s %d\n",stu[tmp-1].id,stu[tmp-1].exam);
	}
	return 0;
}
