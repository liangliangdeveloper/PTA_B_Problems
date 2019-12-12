#include<stdio.h>
#include<string.h>
using namespace std;

char S1[100],S2[100],S3[100],S4[100];

int min(int a,int b){
	if(a<b) return a;
	return b;
} 


int main(){
	scanf("%s", S1);
	scanf("%s", S2);
	scanf("%s", S3);
	scanf("%s", S4);
	int len1 = min(strlen(S1),strlen(S2));
	int len2 = min(strlen(S3),strlen(S4));
	bool first=true;
	
	for(int i = 0; i < len1; i++){
		if(S1[i]==S2[i]){
			if(first&&S1[i]>='A'&&S1[i]<='G'){
				first = false;
				int date = S1[i]-'A'+1;
				switch(date){
					case 1: printf("MON"); break;
					case 2: printf("TUE"); break;
					case 3: printf("WED"); break;
					case 4: printf("THU"); break;
					case 5: printf("FRI"); break;
					case 6: printf("SAT"); break;
					case 7: printf("SUN"); break;
				}
				printf(" ");
			} else if((S1[i]>='A'&&S1[i]<='N')||(S1[i]>='0'&&S1[i]<='9')){
				if(first) continue;
				int hour;
				if(S1[i]>='0' && S1[i]<='9') hour = S1[i]-'0';
				else hour = S1[i] - 'A' + 10;
				printf("%02d:", hour);
				break;
			}
		}
	}
	for(int i = 0; i < len2; i++) {
		if(S3[i]==S4[i]&&((S3[i]>='A'&&S3[i]<='Z')||(S3[i]>='a'&&S3[i]<='z'))){
			printf("%02d", i);
			break;
		}
	}
	return 0;
}
