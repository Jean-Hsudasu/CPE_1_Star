#include<stdio.h>
#include<stdlib.h>
/*
這一題非常簡單，首先輸入你想要跑幾個迴圈(times)，
再輸入兩個數字，將此兩數之間的奇數相加，輸出答案 
*/ 
int main()
{
	int times;
	int min ,max;
	int sum;
	int i,j=1;
	scanf("%d",&times);
	while(times--)
	{
		sum=0;
		scanf("%d%d",&min,&max);
		if(min%2==1)//這裡需要判斷我第一個數，是否為奇數 
		{
			for(i=min;i<=max;i+=2)
			{
				sum+=i;
			}		
		}
		else
		{
			for(i=min+1;i<=max;i+=2)//如果不是需要將值+1從奇數算 
			{
				sum+=i;
			}
		}
		printf("Case %d: %d\n",j++,sum);
		
	 } 
 } 
