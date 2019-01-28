#include <stdio.h>
#include <string.h>
int main(){
	int sum=0;
	char tmp[101];
	int num[4];
	while(scanf("%s",tmp)!=EOF)
	for(int j=0;j<strlen(tmp);j++)
	{
		sum=sum+(int)(tmp[j]-'0');
	}
	int i=0;
	while(sum!=0)
	{
	   num[i]=sum%10;
	   sum/=10;
	   i++;
	} 
	for(int j=i-1;j>=0;j--){
		switch(num[j]){
			case 0:printf("ling");
			       break;
			case 1:printf("yi");
			       break;
			case 2:printf("er");
			       break;
		  	case 3:printf("san");
			       break;
			case 4:printf("si");
			       break; 
			case 5:printf("wu");
			       break;  
		 	case 6:printf("liu");
			       break;
			case 7:printf("qi");
			       break; 
		    case 8:printf("ba");
			       break;  
		    case 9:printf("jiu");
			       break; 
		}
		if(j)
		printf(" ");
	}
	return 0;
}
