#include<stdio.h>
#include<stdlib.h>
/*
這一題需要將一個數字轉為2進位，並計算2進位有幾個1，但要小心，轉二進位的質會爆! 
*/
char binary[10000000];//這裡一定要宣告在這裡 
int main()
{
	int number;//我要輸入的數字 
	int j;//這裡轉二進位會用到 
	int ans;//有幾個1 
	while(scanf("%d",&number)==1)
	{
		if(number==0) break;//諾輸入是0結束程式 
		ans=0,j=0;//記得歸零 
		printf("The parity of ");
		while(number>0)//轉二進位 
		{
			binary[j]=number%2+'0';//這裡要使用"+號"轉成"字元" 
			if(binary[j]=='1') ans++;
			number/=2;
			j++;	
		}
		while(j--) printf("%c",binary[j]);//輸出二進位 
		printf(" is %d (mod 2).\n",ans); 
	}
 } 
