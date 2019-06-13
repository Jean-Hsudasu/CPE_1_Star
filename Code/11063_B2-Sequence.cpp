#include<stdio.h>
#include<stdlib.h>
/*
這一題是要將一陣列如1 2 3 4每個都相加1+1=2 1+2=3 1+3=4 1+4=5 2+2=4 2+3=5 2+4=6 3+3=6 3+4=7 
									 =>2 3 4 5 4 5 6 6 7 (產生此數列)，看是否有重複 
*/
int main()
{
	int n;
	int NumberOne[2002]={0};//一開始的陣列 
	int NumberSum[2002]={0};//經過相加後的陣列 
	int i,j,k;
	int flag;//判斷是否有重複 
	int text=1;//第幾個case 
	while(scanf("%d",&n)==1)
	{
		flag=0;//記得歸零 
		k=0;//記得歸零 
		for(i=0;i<n;i++)
		{
			scanf("%d",&NumberOne[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				 NumberSum[k++] = NumberOne[i]+NumberOne[j];//進行相加 
			}
		}
		for(i=0;i<=k;i++)
		{
			for(j=i+1;j<=k;j++)
			{
				 if(NumberSum[i]==NumberSum[j])
				 {
				 	flag=1;//進行比較 
				 }
			}
		}
		printf("Case #%d:",text++);
		if(flag==1)
		{
			printf(" It is not a B2-Sequence.\n");
		}
		else
		{
			printf(" It is a B2-Sequence.\n");	
		}
		printf("\n");
		
	}
 } 
