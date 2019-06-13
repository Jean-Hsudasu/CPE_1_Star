#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int i,j,time,temp,n,x=0,sum,sum2;
	int a[3000];
	int b[3000];
	int mid=0;

	scanf("%d",&time);//一共要跑幾次迴圈 
	while(x<time)//設定x跑一次迴圈加一 
	{
		//printf("有幾個數字?");
		scanf("%d",&n);//這一次的迴圈要做"幾個"數字 
		sum = 0;//下面會說明 
		sum2 = 0;//下面會說明 
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);//依序存取數字 
		}
		//以下為將數字進行排列 
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		//以上為將數字進行排列 
		
		mid = a[n/2];//排列完後找出中位數
		 
		for(i = 0;i < n;i++){
			sum+=a[i];//將"所以數字"相加 
		}
		
		for(i = 0;i < n;i++){
			b[i]=abs(a[i]-mid);//與中位數相減 
			sum2+=b[i];//將"與中位數相減的數字"相加 
		}
		
		printf("%d\n",sum2);//印出最終的答案 
	
		
		x++;//將x加一		
	}
	return 0;
}
