#include<stdio.h>
#include<stdlib.h>
/*
	又是麻煩的題目了，首先要輸入機器人能跑的範圍(max_x，max_y)，再來輸入起始點(initial_x,initial_y)與一開始的方向(E,W,S,N)
	再來輸入走位(command)，判斷最後的點會在哪裡，並且!!如果上一個機器人有出界的點，這次的機器人會知道，並不會再往前出界!! 
*/
int main()
{
	char pre[100][100] = {};//紀錄出界點 
	char D[2];//機器人一開始的方位 ，要注意題目說是輸入"字串" 
	char command[1002] = {0};//走位指令
	int initial_x,initial_y;//機器人一開始的位子 
	int max_x,max_y; //機器人能走的最大範圍 
	int i,j;
	int flag;//判斷是否有出界用 
	scanf("%d%d",&max_x,&max_y);
	while(scanf("%d%d%s",&initial_x,&initial_y,D)==3)//這裡要注意!字串不加& 
	{
		char d = D[0];//我只要字串的頭 
		flag=0;//初始化 
		scanf("%s",command);
		for(i=0;command[i]!='\0';i++)
		{
			if(command[i]=='F')
			{
				switch(d)
				{
					case 'N': initial_y++; break;
					case 'S': initial_y--; break;
					case 'E': initial_x++; break;
					case 'W': initial_x--; break;	
				}
			}
			else if(command[i]=='R')
			{
				switch(d)
				{
					case 'N': d='E'; break;
					case 'S': d='W'; break;
					case 'E': d='S'; break;
					case 'W': d='N'; break;	
				}
			}
			else //command[i]='L'
			{
				switch(d)
				{
					case 'N': d='W'; break;
					case 'S': d='E'; break;
					case 'E': d='N'; break;
					case 'W': d='S'; break;	
				}
			}
            if(initial_x < 0 || initial_y < 0 || initial_x > max_x || initial_y > max_y) //判斷是否有出界 
			{ 
                switch(d) 
				{
                    case 'N': initial_y--;break;
                    case 'E': initial_x--;break;
                    case 'W': initial_x++;break;
                    case 'S': initial_y++;break;
                }
                if(pre[initial_x][initial_y] == 1)//這裡是要記錄是否有機器人出界過，如果有，要記錄，並且下一個機器人會知道不能再往前!!所以不會再出界，所以continue 
                {
                	continue;//這題的陷阱呀!! 
				}   
				flag=1;
				pre[initial_x][initial_y] = 1;//記錄出界!! 
                break;//出界了，直接輸出答案，flag=1					
			}
		}
		if(flag==0)
		{
			printf("%d %d %c\n",initial_x,initial_y,d);
		}
		else
		{
			printf("%d %d %c LOST\n",initial_x,initial_y,d);	
		}
 	}
 	return 0;
}
