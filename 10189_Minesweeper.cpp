#include<stdio.h>
#include<stdlib.h>
/*
	算是困難題目，就是"踩地雷遊戲"，首先先輸入遊戲的大小(n*m)，再來是輸入哪裡有地雷，如下所示:
																					...*
																					.*..
																					**..
																					..*.
													最後就是計算出他周遭"8個"點,有幾個地雷，如: 
																					112*
																					3*31
																					**31
																					23*1 
*/
char map[2002][2002];//一定要宣告在最上方 (地雷圖) 
char ans[2002][2002];//(數字圖) 
int main()
{
	int i,j;
	int n,m;
	int cas=0;
	int temp;
	while(scanf("%d%d",&n,&m)==2)
	{
		
		cas++;
		if(n==0&&m==0) break;//題目要求 
		if(n!=0&&m!=0&&cas!=1) printf("\n");//格式要求 
		for(i=0;i<n;i++)
		{
			scanf("%s",&map[i]);//先把"橫"的輸入 
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				temp=0;//初始化 
				if(map[i][j]=='*')//如果是*直接跳過 
				{
					ans[i][j]='*';//一樣輸出* 
					continue;
				}
				//下面的邏輯比較困難，要想一下 
				if(j<m-1 && map[i][j+1] == '*') temp++;//往右一格 
				if(j>0 && map[i][j-1] == '*') temp++ ;//往左一格 
				if(j<m-1 && i<n-1 && map[i+1][j+1] == '*') temp++;//往上、往右一格 
				if(j>0 && i<n-1 && map[i+1][j-1] == '*') temp++;//往上、往左一格 
				if(j<m-1 && i>0 && map[i-1][j+1] == '*') temp++;//往下、往右一格 
				if(j>0 && i>0 && map[i-1][j-1] == '*') temp++;//往下、往左一格 												
				if(i>0 && map[i-1][j] == '*') temp++;//往下一格 
				if(i<n-1 && map [i+1][j] == '*') temp++;//往上一格 
				
				ans[i][j] = temp + '0';//int轉str				
			}
		}
		printf("Field #%d:\n",cas);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				map[i][j]='\0';//初始化，避免下一個迴圈又讀到 
				printf("%c",ans[i][j]);
				ans[i][j]='\0';//初始化，同上 
			}
			printf("\n");
		} 		
	}
}	


