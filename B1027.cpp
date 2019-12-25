#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
	int n;
	char p;
	scanf("%d %c", &n, &p);
	int i = sqrt((n + 1) / 2);
	int use = 2 * i * i - 1;
	if(n == 0) {
		i = 0;
		use = 0;
	}
	for(int j = i; j >= 1; j--){
		for(int k = 1; k <= i - j; k++) printf(" ");
		for(int k = 1; k <= 2 * j - 1; k++) printf("%c", p);
		printf("\n");
	}
	for(int j = 2; j <= i; j++){
		for(int k = 1; k <= i - j; k++) printf(" ");
		for(int k = 1; k <= 2 * j - 1; k++) printf("%c", p);
		printf("\n");
	}
	printf("%d", n-use);
	return 0;
} 
