#include<stdio.h>
#include<stdlib.h>
/*這題主要是要算完全平方，如1,4,9,16...*/
int main()
{
	int min,max;//輸入一個範圍如:1 6 
	int ans;//範圍裡有幾個完全平方 
	int i,j;
	int Completely_squared[100002]={};//這裡是存所有的完全平方 
	for(i=1;i*i<100001;i++)
	{
		Completely_squared[i]=i*i;//先自己有個完全平方的資料	
	}
 
	while(scanf("%d%d",&min,&max)==2)
	{
		ans=0;
		if(min==0&&max==0) break;
		for(i=min;i<=max;i++)
		{
			for(j=1;j*j<100001;j++)//看範圍裡是否有完全平方 
			{
				if(i==Completely_squared[j])
				ans++;
				continue;
			}
		}
		printf("%d\n",ans);
	}

 } 
