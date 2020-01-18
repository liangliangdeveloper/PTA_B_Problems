#include<stdio.h>
#include<string.h>

char c[10];
int num = 0;
float sum = 0;

bool test(char c[]){
	int len = strlen(c);
	int i = 0;
	float n;
	if(c[0]=='-') i++;
	for(; i < len && c[i]!='.'; i++){
		if(!(c[i]>='0'&&c[i]<='9'))
			return false;
	}
	if(c[i]=='.'){
		if(len-i-1>2) return false;
		for(int j = i+1; j < len; j++){
			if(!(c[j]>='0'&&c[j]<='9'))
				return false;
		}
	}
	sscanf(c,"%f",&n);
	//printf("%f",n);
	if(n>1000||n<-1000) return false;
	else {
		num++;
		sum += n;
		return true;
	}
}
	

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%s",c);
		if(test(c)==false){
			printf("ERROR: %s is not a legal number\n",c);
		}
	}
	printf("The average of %d number",num);
	if(num!=1) printf("s");
	printf(" is ");
	if(num == 0) printf("Undefined\n");
	else printf("%.2f",sum/num);
	return 0;
} 
