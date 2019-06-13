#include<stdio.h>
#include<stdlib.h>
/*
這一題看似複雜，但其實並沒有想像中困難，將十進位轉為費式數列。
費式數列:
從i=2開始，依序將向上兩個數列相加，EX: 
	i	0	1	2	3	4
	x	1	2	3	5	8 
演算法: 
首先，建一個費式數列，再輸入我要跑幾次迴圈(times)，輸入需要轉換的質(number)，輸出費式數列 
*/
int main()
{
	int Fib[2002];//費式數列 
	int times;//迴圈數 
	int number;//需要轉換的質 
	int flag;//判斷是否開始，等等說明 
	int i,j;
	Fib[0]=1;
	Fib[1]=2;
	for(i=2;i<39;i++)//建費式數列，先到i=39就好 
	{
		Fib[i]=Fib[i-1]+Fib[i-2];
	}
	scanf("%d",&times);
	while(times--)
	{
		scanf("%d",&number);
		printf("%d = ",number);
		flag=0;//記得歸零 
		for(i=38;i>=0;i--)
		{
			if(number/Fib[i]==1)//看有沒有到我要的質了，如17=13+3+1，這裡就是要判斷是否到13這個質了(到了商自然大於一) 
			{
				printf("1");
				flag=1;//因為費事數列轉換成"1" "0"，"1"一定是開頭
				number%=Fib[i];//假如這裡已經將17=13+?，有13這個質了，接下來剩4(17-13)，所以使用餘數% 
			}
			else if(flag)//flag一定要是1，才知道轉換是否開始 
			{
				printf("0");
			}
		}
		printf(" (fib)\n");
	}
 } 
