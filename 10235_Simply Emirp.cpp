#include<stdio.h>
#include<stdlib.h>
/*
這一題與質數有關，諾不為質數則輸出 x is not prime.
				  諾為質數，還需要判斷將數字反轉後是否也為質數，如果兩個都成立輸出 x is emirp.
				  												如果反轉後不是質數數輸出 x is prime.
				  ex:19本身是質數，但反轉後變成91，不是質數了，輸出 19 is prime  
*/
int main()
{
	int number;
	int re_number;//反轉後的數字 
	int i,j,temp;
	int key1,key2;//key1判斷原本數字用，key2判斷反轉後的數字用 
	while(scanf("%d",&number)==1)
	{
		key1=0,key2=0;//先都預設為零 
		if(number==2) key1=1;//2比較特別，因為2也是質數，key1直接給他1 
		for(i=2;i<number;i++)//這裡開始進行計算，從2到number-1 
		{
			if(number%i==0)
			{
				key1=0;//如果有碰到可以整除的給他0，然後直接跳掉 
				break;
			}
			key1=1;
		}
		re_number=0;//初始化 
		if(key1==1)//如果number是質數才有必要進入 
		{
			temp=number;//將number存入temp，以免等等做反轉被洗掉 
			while(temp>0)//反轉 ，以number=123為例 
			{
				re_number*=10;//這個一開始不會用到；3*=10=30(往左推);32*=10=320   ;temp<0(跳出迴圈)
				j=temp%10;//3=123%10               ;2=12%10 		;1=1%10
				re_number+=j;//3=3+0			   ;32=30+2			;321=320+1
				temp/=10;//12=123/10(temp=10)	   ;1=12/10(temp=1) ;0=1/10(temp=0) 
			}
			if(number!=re_number)//一樣看是否會被整除 
			{
				for(i=2;i<re_number;i++)
				{
					if(re_number%i==0)
					{
						key2=0;
						break;
					}
					key2=1;
				}
			}		
		}
		if(key1==0)
		{
			printf("%d is not prime.\n",number);	
		}
		if(key1==1&&key2==0)
		{
			printf("%d is prime.\n",number);
		}
		if(key1==1&&key2==1)
		{
			printf("%d is emirp.\n",number);
		}	
	}
 } 
