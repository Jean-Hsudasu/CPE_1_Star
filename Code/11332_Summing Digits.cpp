#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int number;//這個是存我一開始輸入的數字，如:123456789 
	int numberQuotient[1002];//這裡是做"第一次"運算，先將數字拆開成1 2 3 4 5 6 7 8 9，全部加起來，諾大於"10"，則要進行"第二次"運算 
	int numberQuotient2[1002];//同上 
	int numberQuotient3[1002];//同上 
	int mod;
	int i;
	int sum=0;//這裡是存"每一次"拆開後再做運算的值。 
	while(scanf("%d",&number)==1)
	{
		sum=0;
		if(number==0) break;//如果輸入0，結束程式 
		for(i=9;i>=0;i--)//這裡主要是做"拆開數字" 
		{
			mod=0; 
			mod = pow(10,i);
			numberQuotient[i]=number/mod; 
			number=number%mod; 
		}
		for(i=9;i>=0;i--)//在個別加起來 
		{
			sum+=numberQuotient[i];
		}
		if(sum<10)//如果小於10印出答案 
		{
			printf("%d\n",sum);
		}
		else//沒有的話，再跑一次 
		{
			for(i=1;i>=0;i--)
			{
				mod=0; 
				mod = pow(10,i);
				numberQuotient2[i]=sum/mod; 
				sum=sum%mod; 
			}
			sum=0;//這裡記得要歸零喔 
			for(i=1;i>=0;i--)
			{
				sum+=numberQuotient2[i];//不然這裡會累加到 
			}
			if(sum<10)//同上 
			{
				printf("%d\n",sum);		
			}
			else
			{
				for(i=1;i>=0;i--)
				{
					mod=0; 
					mod = pow(10,i);
					numberQuotient3[i]=sum/mod; 
					sum=sum%mod; 
				}
				sum=0;
				for(i=1;i>=0;i--)
				{
					sum+=numberQuotient3[i];
				}
				printf("%d\n",sum);	
			}
			
		}		
	}
 } 
