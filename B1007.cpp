#include <stdio.h>
#include <math.h>
bool isPrime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
		   return false;
		}
	}
	return true;
 } 
 
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	int count=0;
 	for(int i=2;i<=n-2;i++)
 	{
 		if(isPrime(i)&&isPrime(i+2))
 		   count++;
	 }
	printf("%d",count);
	return 0;
 }
