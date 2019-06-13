#include<stdio.h>
#include<stdlib.h>
/*
這一題算是困難題，簡單來說，題目會要求我輸入36個數字 (0~35)分別為各數字的價錢，
如果現在的數字是15674，然後36個數字，為10(0) 15(1) 2(2) 47(3) 9(4) 5(5) 6(6) 11(7) .....(8)(9)...到(35) 
分別代表1-15 5-5 6-6 7-11 4-9，產生了15+5+6+11+9=46
那個個例子是10進位的，題目要求我們算出"2"到"36"進位，各個數字的價錢，並找出"最小的" 						 
*/
int main()
{
	int ncase;//有幾個case
	int price[200];//各字元的價錢
	int nextcase;//在各case下要輸入幾個數字
	int number;//要被計算的數字
	int number2;//因為要計算每個進位，所以我們要將number2=number，以免被吃掉 
	int cheapest=20000001;
	int numberprice[200];//個數字的總價錢
	int i,j,k;
	scanf("%d",&ncase);
	for(i=0;i<ncase;i++) 
	{
		for(j=0;j<36;j++) scanf("%d",&price[j]);//輸入36個價錢 
		scanf("%d",&nextcase);
		printf("Case %d:\n",i+1);
		for(j=0;j<nextcase;j++)//開始跑這個case的迴圈 
		{
			cheapest=20000001;//記得要再寫一次，不然一開始最小就真的很小了 
			scanf("%d",&number);
			printf("Cheapest base(s) for number %d:",number);
			for(k=2;k<=36;k++)
			{
				number2=number;//因為要計算每個進位，所以我們要將number2=number，以免被吃掉
				numberprice[k-2]=0;//初始化 
				for(k;number2>0;number2/=k)//跑進位 
				{
					numberprice[k-2]+=price[number2%k];
				}
				if(cheapest>numberprice[k-2])//找最小的 
				{
					cheapest=numberprice[k-2];	
				}
			}
			for(k=0;k<36;k++)
			{
				if(cheapest==numberprice[k])//看最小的是幾進位 
				{
					printf(" %d",k+2);//因為是從2進位開始，所以+2 
				}
			}
			printf("\n");
		}
		if(i<ncase-1) printf("\n");//題目格式要求 
	} 
}
