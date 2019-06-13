#include<stdio.h>
#include<stdlib.h>
/*
這是一題簡單題，輸入一個n，然後跑題目提供的程式迴圈，只要在自己寫個最大公因數即可 
*/ 
int GCD(int i,int j)//求最大公因數 
{
	int temp;
	while(j>0)
	{
		temp=i%j;
		i=j;
		j=temp;
	}
	return i;	
}
int main()
{
	int n;
	int i,j;
	int G;
	while(scanf("%d",&n)==1)
	{
		if(n==0) break;
		G=0;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
		    	G+=GCD(i,j);//回傳值加入G; 
			}	
		}
		printf("%d\n",G);
	}
 } 
