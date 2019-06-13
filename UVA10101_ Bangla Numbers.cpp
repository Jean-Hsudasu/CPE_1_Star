#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int num;//因為題目說最大會到15位數，所以我們用long long int的型態來宣告 
	int ans=1;//這個是指，經過計算後"需要輸出的數字"(商) 
	int cas=1;//這個是指，到地幾個迴圈了 
	int ans1;//這個是因為題目要求，如果 shata 後的 kuti 是"沒有數字"的 那我還是要輸出 kuti，所以為了判斷我把上一個ans存起來給ans1
		while(scanf("%lld",&num)==1)
		{	
			printf("%4d.",cas++);	
			if(num==0)//如果輸出是0也要出現喔! 
			{
				printf(" 0");
			}
			ans=num/100000000000000;//15位數 
			if(ans!=0)//這裡的邏輯是把我所輸入的數字與現在的位數去做除法，得到商 
			printf(" %d kuti",ans);
			num=num%100000000000000;//這裡再把現在的位數的"餘數"算出來，好做下一輪 
			
			ans=num/1000000000000;//13位數 
			if(ans!=0)//同上 
			printf(" %d lakh",ans);
			num=num%1000000000000;
			
			ans=num/10000000000;//11位數 
			if(ans!=0)//同上 
			printf(" %d hajar",ans);
			num=num%10000000000;
			
			ans=num/1000000000;//10位數 
			ans1=ans;//這裡開始說明特例 
			if(ans!=0)//同上 
			printf(" %d shata",ans);
			num=num%1000000000;
			
			ans=num/10000000;//8位數 
			if(ans!=0) 
			printf(" %d kuti",ans);
			if(ans==0&&ans1!=0)//同上述宣告所說明的 
			printf(" kuti");
			num=num%10000000;
			
			ans=num/100000;//6位數 
			if(ans!=0)//同上
			printf(" %d lakh",ans);
			num=num%100000;
			
			ans=num/1000;//4位數 
			if(ans!=0)//同上 
			printf(" %d hajar",ans);
			num=num%1000;
			
			ans=num/100;//3位數 
			if(ans!=0)//同上 
			printf(" %d shata",ans);
			num=num%100;
			
			
			ans=num;
			if(ans!=0)//同上
			printf(" %d",ans);
			printf("\n");//記得要換行 
		}	
 } 
