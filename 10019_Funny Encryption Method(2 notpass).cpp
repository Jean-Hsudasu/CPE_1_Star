#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str_number[2002];
	int int_number[2002];
	//char* str_number1 = str_number;
	int times;
	int int_numbersum;
	int i,j;
	int k;
	int ans1,ans2;
	int Nbinary;
	scanf("%d",&times);
	while(times--)
	{
		scanf("%s",str_number);
		
		for(i=0;str_number[i]!='\0';i++)
		{
			int_number[i]=str_number[i]-'0';
		}
		j=i-1;
		k=1;
		for(j;j>=0;j--)
		{
			int_numbersum+=int_number[j]*k;
			k*=10;
		}
		while(int_numbersum>=1) 
		{ 
			ans1+=(int_numbersum%2);
			int_numbersum/=2; 	 
		} 
		
		ans2=0;
		for(i=0;str_number[i]!='\0';i++)
		{
			if(str_number[i]=='0') ans2+=0;
			if(str_number[i]=='1') ans2+=1;
			if(str_number[i]=='2') ans2+=1;
			if(str_number[i]=='3') ans2+=2;
			if(str_number[i]=='4') ans2+=1;
			if(str_number[i]=='5') ans2+=2;
			if(str_number[i]=='6') ans2+=2;
			if(str_number[i]=='7') ans2+=3;
			if(str_number[i]=='8') ans2+=1;
			if(str_number[i]=='9') ans2+=2;
		}
		
		printf("%d %d\n",ans1,ans2);		
	}
 } 
