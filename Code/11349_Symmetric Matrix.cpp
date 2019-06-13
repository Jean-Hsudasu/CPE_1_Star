#include<stdio.h>
#include<stdlib.h>
#define max 101
/*
這一題要我們計算"對稱矩陣"，但這裡的對稱矩陣和我們熟知的對稱矩陣有點不同，其為:
																		5 1 3
																		2 0 2
																		3 1 5
																		這樣就是其對稱矩陣。
																		5 1 3
																		2 0 2
																		0 1 5
																		這樣就不是對稱矩陣。
解題技巧:
直接將輸入拉成一為陣列 為:5 1 3 2 0 2 3 1 5，我們會發現是為"迴文"  
*/
int main()
{
	int cases;//這個是我們要跑幾次迴圈 
	char str[2];//這個不太重要，是題目要求輸入 "N ="的東西 
	int i,j;
	long long int number[max*max];//因為這裡會超過int的儲存空間 
	int flag;//這裡是只要判斷是否為對稱矩陣的地方 
	int n;//矩陣維度 
	int text=1;//迴圈次數 
	scanf("%d",&cases);
	while(cases--)
	{
		flag=0;
		scanf("%s %s %d",str,str,&n);//這裡是輸入n = 3的地方，其3比較重要 
		for(i=0;i<n*n;i++)
		{
			scanf("%lld",&number[i]);//直接存成一為陣列 
		}
		for(i=0;i<n*n;i++)
		{
			if(number[i]!=number[(n*n-1)-i]||number[i]<0)//這裡要小心不能是負的 
			{
				flag=1;//如果發現有不一樣的，將flag變更為一 
				goto end;//跑到end 
			}
		}
		end:
		printf("Test #%d: ", text++);
		if(flag)//=0
		{
			printf("Non-symmetric.\n");
		}
		else//=1
		{
			printf("Symmetric.\n");
		}
	}
}
