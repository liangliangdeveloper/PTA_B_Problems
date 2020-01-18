#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
	double R1,R2,P1,P2;
	scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
	double R = R1*R2;
	double P = P1+P2;
	double A = R*cos(P);
	double B = R*sin(P);
	A = fabs(A)<0.01? 0:A;
	B = fabs(B)<0.01? 0:B;
	printf("%.2f",A);
	if(B>=0){
		printf("+");
	}
	printf("%.2fi",B);
}
