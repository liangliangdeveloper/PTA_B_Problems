#include <stdio.h>

using namespace std;

const int maxn = 1000001;
int prime[maxn], pNum = 0;
bool p[maxn] = {0};

void Find_Prime() {
    for(int i = 2; i < maxn; i++) {
        if(p[i] == false) {
            prime[pNum++] = i;
            for(int j = i + i; j<maxn; j += i) {
                p[j] = true;
            }
        }
    }
}

int main(){
	Find_Prime();
	int M,N;
	int num = 0;
	scanf("%d %d", &M, &N);
	for(int i=2; i<=1000001; i++){
		if(p[i]==false) {
			num++;
			if(num>=M && num<=N) {
			printf("%d", i);
			if((num - M + 1)%10==0){
				printf("\n");
			} else if(num != N){
				printf(" ");
			}
			
		}
		if(num == N) break;
	    }
    }
    return 0;
}
