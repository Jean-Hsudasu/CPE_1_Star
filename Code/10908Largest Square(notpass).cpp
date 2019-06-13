#include<stdio.h>
#include<stdlib.h>
/*
這是一題滿複雜的題目，首先需要輸入要求幾個樣本數(ncase)，再來輸入地圖的長寬(M,N)，再輸入地點數(Q)
諾地點數輸入是3，就代表有3個點要判斷，先輸入第一個點(x=2,y=5)，如下圖所示，(2,5)=a，
接下來我們要算出以(2,5為中心)有多少個一樣的a可以組成最大的正方形，求出其邊長即可，(2,5)=3邊長(周圍有8個a)
再輸入第二個點...以此類推 
		
		  0 1 2 3 4 5 6 7 8 9
		0 a b b b a a a a a a
		1 a b b b a a a a a a
		2 a b b b a a a a a a
		3 a a a a a a a a a a 
		4 a a a a a a a a a a
		5 a a c c a a a a a a 
		6 a a c c a a a a a a
*/
int main()
{
	int M,N,Q;
	char maps[202][202];
	int ncase;
	int i,j;
	int x,y;
	scanf("%d",&ncase);
	while(ncase--)
	{
		scanf("%d%d%d",&M,&N,&Q);
		
		for(i=0;i<M;i++)
		{
			getchar();//這裡可能是怕抓到空的質， 
			for(j=0;j<N;j++)
			{
				maps[i][j]=getchar();//一個一個位元抓 
			}
		}
		printf("%d %d %d\n",M,N,Q);//印出長、寬、地點數 
		while(Q--)
		{
			int flag=0;//判斷是否附近的位元相同用 
			int a,b;
			int ans=1;//邊長數 
			scanf("%d%d",&x,&y);//輸入地點 
			for(i=0;i<M||i<N;i++)//直接跑到最大質，怕如果是邊邊的地點會有問題 
			{
				for(a=x-i;a<=x+i;a++)//先以中心點考慮，再來將i+1跑中心點附近的8個點，這個跑寬(x) 
				{
					for(b=y-i;b<=y+i;b++) //這個跑長(y)                        
					{
						if(a<0||b<0)//如果跑到點是負的，不可能! 
						{
							flag=1;
							break;	
						}
						if(maps[a][b]!=maps[x][y])//如果附近位元不相同，flag=1，跳出迴圈 
						{
							flag=1;
							break;	
						}
					}	
				}
				if(flag==0)//如果可以一路到這裡就代表成功啦!把ans值更新吧 
				{
					ans=2*i+1;	
				}	
			}
			printf("%d\n",ans);		
		}			
	}
 } 
