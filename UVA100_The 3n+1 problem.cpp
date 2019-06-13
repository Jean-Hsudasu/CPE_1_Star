#include<stdio.h>
#include<stdlib.h>
int main()
{
	int first,last;//宣告首數與尾數。 
	int i,j;//迴圈需要，下面會解釋。 
	int now=1,max=1;//now是目前所計算到的次數，max為所有次數裡最大的那個數次 
	int len;
	while(scanf("%d%d",&first,&last)==2)
	{
		max=1;//記得每次迴圈都要將max=1，否則會被上個迴圈所影響。 
		if(first=<last)//因為你不會確定，一定是先輸入小的在輸入大的 
		{
			for(i=first;i<=last;i++)//跑first到last之間的所有數值 
			{
				now=1;//記得每次迴圈都要將now=1，否則會被上個now所影響。 
				j=i;//因為又要進入另一個迴圈，所以我們在設定一個j，讓i不會因為下面的迴圈跑掉值 
				while(true)
				{
					if(j==1) break;//如果計算到j=1，則跳出迴圈 
					if(j%2==1)//題目要求 
					{
						j=3*j+1;
						now++;//有進來就代表j還不是1，所以要加一次 次數 
					}
					if(j%2==0)//題目要求 
					{
						j=j/2;
						now++;//有進來就代表j還不是1，所以要加一次 次數 
					}
					if(now>max)//比大小啦，如果現在算好的次數比原本的最大值還要大，則取代他 
					{
						max = now;
					}
				}
			}
		printf("%d %d %d\n",first,last,max);
		}
		
		if(first>last)//因為你不會確定，一定是先輸入小的在輸入大的
		{
			for(i=last;i<=first;i++)//一下邏輯一樣 
			{
				now=1;
				j=i;
				while(true)
				{
					if(j==1) break;
					if(j%2==1)
					{
						j=3*j+1;
						now++;
					}
					if(j%2==0)
					{
						j=j/2;
						now++;
					}
					if(now>max)
					{
						max = now;
					}
				}
			}
		printf("%d %d %d\n",first,last,max);
		}
		
	}
 } 
