#include<stdio.h>
#include<stdlib.h>
/*
這一題是要將10進位轉2進位，16進位轉2進位，並判斷其中有多少個1
首先，輸入一個數值(times)，代表要跑幾次迴圈，接下來輸入要判斷的數字(number)，將其看為10進位轉2進位會有幾個1；為16進位轉2進位會有幾個1
以下為程式碼 
*/
int main()
{
	int number;
	int times;
	int i,j;
	int ans1,ans2;//ans1:以10進位來看有幾個1;ans2:以16進位來看有幾個1
	scanf("%d",&times);
	while(times--)
	{
		ans1=0;
		scanf("%d",&number);
		i=number;//因為在判斷10進位會有幾個1時number會被改寫，所以我們這裡存一個i等等給16進位用 
		while(number>=1) 
		{ 
			ans1+=(number%2);//有0有1，反正判斷到0加上去也一樣，所以直接加? 
			number/=2;//如:7/2=3，(上面輸出1)下一次就是跑3 	 
		} 
		ans2=0;
		while(i>0)//這題簡單的地方是16進位不會有abcdef，直接判斷就好 
		{
			j=i%10;//我只要尾巴那個數 如:265，我只要5 
			if(j==0) ans2+=0;//這裡就是轉2進位的地方啦 如 2 6 5=0010 0110 0101 
			if(j==1) ans2+=1;//0001
			if(j==2) ans2+=1;//0010
			if(j==3) ans2+=2;//0011
			if(j==4) ans2+=1;//0100
			if(j==5) ans2+=2;//0101
			if(j==6) ans2+=2;//0110
			if(j==7) ans2+=3;//0111
			if(j==8) ans2+=1;//1000
			if(j==9) ans2+=2;//1001
			i/=10;//把尾巴丟掉，如:265 265/10=26 
		}
		printf("%d %d\n",ans1,ans2);		
	}
 } 
