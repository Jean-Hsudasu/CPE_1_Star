#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
	long long int first,second;//先宣告需要輸入的兩個數字 
	int ans=0;//這個是存最終有多少進位 
	int firstQuotient[1002];//這個陣列是存拆開的數字，例如:1002 -> 1,0,0,2 
	int secondQuotient[1002];//同上 
	long long int mod;//這個是等等會用到的，下面會解釋 
	int i;
	while(scanf("%lld%lld",&first,&second)==2)
	{
		ans = 0;//記得要歸零，不然是會壘加上去的!! 
		if(first==0&&second==0) break;//題目要求 
		for(i=9;i>=0;i--)//接下來的比較困難喔!!要把數字一個一個拆開，存到陣列裡頭 
		{
			mod=0;//先將其歸零 
			mod = pow(10,i);//存入現在的位數，如:一開始是i=9，所以mod=10^9=1000000000 
			firstQuotient[i]=first/pow(10,i);//將我輸入的數字(first)，除以目前的位數。如:2999999999/1000000000=2 ，將2存到i[9]裡頭 
			first=first%mod;//記得要再將first降一位數，如:2999999999%1000000000=999999999(餘數) 
		}		
		for(i=9;i>=0;i--)//邏輯一樣，現在換成second 
		{
			mod=0;
			mod = pow(10,i);
			secondQuotient[i]=second/pow(10,i);
			second=second%mod;
		}
		for(i=0;i<10;i++)//現在陣列裡已經有拆好的數字啦! 
		{
			if(firstQuotient[i]+secondQuotient[i]>=10)//計算一下有沒有進位啦! 
			{
				firstQuotient[i+1]+=1;//記得如果有進位下一個數字要在加一!如:99+01=100(進了兩位喔!) 
				ans++;
			}
		}
		//最後輸出完成啦! 
		if (ans==0)
		{
			printf("No carry operation\n.");
		}
		else if (ans==1)
		{
			printf("1 carry operation\n.");
		}
		else
		{
			printf("%d carry operations.\n",ans);
		}

	}
 } 
