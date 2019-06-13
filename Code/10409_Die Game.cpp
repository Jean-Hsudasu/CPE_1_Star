#include<stdio.h>
#include<stdlib.h>
/*
	這一題如果對"立體圖"不好的人，會比較吃力一些，簡單來說就是骰子題，首先輸入要骰幾次，再來就是看骰哪個方向，並且先固定:
	 																					top=1,down=6,north=2,west=3,east=4,south=5;
	 																					最後輸出top的值 
*/
int main()
{
	int top,down,north,west,east,south;
	int temp;//這裡要存top的值，不然等等計算方向時，會被洗掉(top=...) 
	int times;//骰的次數 
	char step[6];
	while(scanf("%d",&times)==1)
	{
		if (times==0) break;
		top=1,down=6,north=2,west=3,east=4,south=5;//記得要寫在這裡，類似初始化，不然下一輪會算錯 
		while(times--)
		{
			scanf("%s",&step);
			temp = top;
			if(step[0]=='n')//冷靜下來，想一下就會出來答案了 
			{
				top = south;
				south = down;
				down = north;
				north = temp;
			}
			else if(step[0]=='w')
			{
				top = east;
				east = down;
				down = west;
				west = temp;
			}
			else if(step[0]=='e')
			{
				top = west;
				west = down;
				down = east;
				east = temp;
			}
			else//step=="south"
			{
				top = north;
				north = down;				
				down = south;
				south = temp;
			}
		}
		printf("%d\n",top);
	}
 } 
