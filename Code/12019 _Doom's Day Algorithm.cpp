#include<stdio.h>
#include<stdlib.h>
int main()
{
	const int monthday[]={0,31,28,31,30,31,30,31,31,30,31,30,31};//這裡的const是代表"不能再改變"類似java的final 
	const char *weekday[]={"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};//題目要求以2011年為基準，剛好1/1是星期六(餘一) 
	int i,n;
	int month,day;
	int totalday;
	scanf("%d",&n);
	while(n--)
	{
		totalday=0;
		scanf("%d%d",&month,&day);
		for(i=0;i<month;i++)
		{
			totalday+=monthday[i];//將所有的日子加起來 
		}
		totalday+=day;//記得還要加後面的日期，如輸入2/6=0+31+6 
		printf("%s\n",weekday[totalday%7]);//最後輸出答案 
	}
}
