#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

struct student{
	char id[10];
	int de;
	int cai;
	int classnum;
}stu[100010]; 

int N,L,H;

int whichclass(student stu){
	if(stu.de<L||stu.cai<L) return 0;
	if(stu.cai>=H && stu.de>=H) return 4;
	else if (stu.de>=H && stu.cai<H) return 3;
	else if (stu.de<H && stu.cai<H && stu.de>=stu.cai) return 2;
	return 1;
}

int cmp(student a, student b){
	if(a.classnum!=b.classnum)       return a.classnum>b.classnum;
	else if(a.cai+a.de!=b.cai+b.de)  return a.cai+a.de>b.cai+b.de;
	else if(a.de!=b.de)              return a.de>b.de;
	else                             return strcmp(a.id,b.id) < 0;
}

int main(){
	int M = 0;
	scanf("%d %d %d", &N,&L,&H);
	getchar();
	for(int i=0;i<N;i++) {
		scanf("%s",&stu[i].id);
		scanf("%d%d",&stu[i].de,&stu[i].cai);
		stu[i].classnum = whichclass(stu[i]);
		if(stu[i].classnum!=0) M++;
	}
    
	sort(stu,stu+N,cmp);
	printf("%d\n", M);
	for(int i=0;i<M;i++) {
		printf("%s %d %d\n",stu[i].id,stu[i].de,stu[i].cai);
	}
	return 0;
}
