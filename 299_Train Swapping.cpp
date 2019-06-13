#include<stdio.h>
#include<stdlib.h>
/*
	這題很簡單，將一個初始數列由小到大排列，由"泡沫排序法"排列，計算要排列幾次可以得到答案 
*/ 
int main()
{
	int textdata;
	int len;
	int number[100];
	int numbertemp;
	int i,j;
	scanf("%d",&textdata);
	int ans;
	while(textdata--)
	{
		ans=0;
		scanf("%d",&len);
		for(i=0;i<len;i++)
		{
			scanf("%d",&number[i]);
		}
		for(i=0;i<len;i++)//泡沫排序 
		{
			for(j=i+1;j<len;j++)
			{
				if(number[i]>number[j])
				{
					numbertemp=number[i];
					number[i]=number[j];
					number[j]=numbertemp;
					ans++;	
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
	
 } 
