#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

char upten[3]={'J','Q','K'};

int main(){
	char A[105];
	char B[105];
	int  C[105];
	scanf("%s %s",A,B);
	int lenA = strlen(A);
	int lenB = strlen(B);
	int lenmax = lenA > lenB?lenA : lenB;
	for(int i = 1;i<=lenmax;i++){
		if(i%2==1){
			if((lenA-i)<0)
				C[i]=B[lenB-i]-'0';
			else if((lenB-i)<0)
				C[i]=A[lenA-i]-'0';
			else {
				C[i]= (A[lenA-i]+B[lenB-i]-'0'-'0')%13;
			}
		} else {
			if((lenA-i)<0)
				C[i]=(B[lenB-i]-'0'+10)%10;
			else if((lenB-i)<0)
				C[i]=('0'-A[lenA-i]+10)%10;
			else {
				C[i]=(B[lenB-i]-A[lenA-i]+10)%10;
			}
		}
	}
	for(int i=lenmax;i>=1;i--){
		if(C[i]<10){
			printf("%d",C[i]);
		}
		else {
			printf("%c",upten[C[i]-10]);
		}
	}
	return 0; 
}
