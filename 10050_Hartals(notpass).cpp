#include<stdio.h>
#include<stdlib.h>
/*
這題是一題數學題，要算出總天數中，不能開會的天數(一個政黨罷工就不行開會)，以"星期天"來當第一天，輸入總天數(days)，再輸入政黨數(partys)
分別輸入各政黨的罷工週期(如:3，就是表示每隔3天就會罷工一次)，算出罷工天數，但這裡要注意，國會星期五與六放假，不計入罷工天數 
*/
int main()
{
	int ncase;//要跑幾個case 
	int days;//各case中的總天數 
	int day[2002];//這裡是以0 1來做表示，0代表成功開會，1代表有政黨罷工 
	int partys;//政黨數
	int party[202];//各政黨的罷工週期 
	int i,j;
	int daysum;//總罷工天數 
	scanf("%d",&ncase);
	while(ncase--)
	{
		
		scanf("%d",&days);
		for(j=0;j<days;j++)
		{
			day[j]=0;//這裡是將裡面的 0 1 做初始化 
		}
		scanf("%d",&partys);
		for(i=0;i<partys;i++)
		{
			scanf("%d",&party[i]);
			for(j=0;j<days;j++)//從第一天開始算是否有政黨罷工 
			{
				if((j+1)%party[i]==0 && (j+1)%7!=6 && (j+1)%7!=0)//j+1是因為我們要從"第一天"開始，然後如果碰到星期五六，政黨罷工不算 
				{
					day[j]=1;//這裡剛好，如果政黨有重覆到天數也沒差，反正1還是1 
				}	
				if(day[j]==0)//這裡需要day[j]==0是因為這裡是算"各個政黨"的罷工天數，上一個政黨的1可能會被洗掉，所以我們需要day[j]==0 
				{
					day[j]=0;
				}
			}
		}
		daysum=0;//這裡要記得初始化 
		for(i=0;i<days;i++)
		{
			daysum+=day[i];
		}
		printf("%d\n",daysum);	
	}
}
