#include<stdio.h>
#include<string.h>

char cmp[100],password[100];
int time;

int main(){
	scanf("%s %d",password,&time);
	getchar();
	while(time--){
		gets(cmp);
		getchar();
		if(strcmp(password,cmp)==0){
			printf("Welcome in\n");
			break;
		} else {
			if(cmp[0]=='#'&&strlen(cmp)==1)
				break;
			else
				printf("Wrong password: %s\n",cmp);
		}
	}
	if(time == -1) printf("Account locked\n");
	return 0;
}
