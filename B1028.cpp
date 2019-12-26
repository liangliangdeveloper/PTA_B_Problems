#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct person{
	char name[10];
	int year;
	int month;
	int day;
}people[100010];

bool isover(person p){
	if(p.year < 2014-200) return false;
	if(p.year == 2014-200 && p.month < 9) return false;
	if(p.year == 2014-200 && p.month == 9 && p.day < 6) return false;
	return true;
}

bool isbirth(person p){
	if(p.year > 2014) return false;
	if(p.year == 2014 && p.month > 9) return false;
	if(p.year == 2014 && p.month == 9 && p.day > 6) return false;
	return true;
}

bool cmp(person a, person b){
	if(a.year != b.year) return a.year < b.year;
	else if(a.month != b.month) return a.month < b.month;
	else if(a.day != b.day) return a.day < b.day;
}

int main(){
	int n;
	int num = 0;
	person tmp;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%s %d/%d/%d",tmp.name, &tmp.year, &tmp.month, &tmp.day);
		if(isover(tmp)&&isbirth(tmp)){
			strcpy(people[num].name,tmp.name);
			people[num].year = tmp.year;
			people[num].month = tmp.month;
			people[num].day = tmp.day;
			num++;
		}
	}
	sort(people, people+num,cmp);
	printf("%d", num);
	if(num > 0) printf(" %s %s\n",people[0].name, people[num-1].name);
	return 0;
}
