#include<stdio.h>
#include<stdlib.h>
/*
這一題與取餘數有關，判斷是否為9的倍數，諾市還需要判斷可以跑到幾階層，如:999 => 27(9+9+9) => 9(2+7, 2階) 
																	 99999 99999 99999 99999 9 => 189=> 18=> 9(1+8, 3階)
																	 請注意輸出會到"1000位數" 
*/ 
int main()
{
	char number[1002];//直接用字元存吧 
	int check_number;//會不斷變動的數字 
	int temp;
	int i;
	while(scanf("%s",number)!=EOF)
	{
		check_number=0;//初始化 
		for(i=0;number[i]!='\0';i++)
		{
			check_number+=number[i]-'0';//把各個字元相加，並轉成數字 
		}
		i=0;//初始化 
		if(check_number==0) break;//拓輸入為0，程式結束 
		if(check_number%9==0)
		{
			i++;//諾可以被9整除就表示有一階了 
			if(check_number>10)//諾大於十繼續跑 
			{
				temp=check_number;
				check_number=0;//浮動的喔 
				while(temp>0)//這裡將質再計算一次 
				{
					check_number+=temp%10;
					temp/=10;
				}
				i++;
			}
			while(check_number>10)
			{
				temp=check_number;
				check_number=0;
				while(temp>0)
				{
					check_number+=temp%10;
					temp/=10;
				}
				i++;
			}
			printf("%s is a multiple of 9 and has 9-degree %d.\n",number,i);
		}
		else
		{
			printf("%s is not a multiple of 9.\n",number);
		}
	 } 
 } 
