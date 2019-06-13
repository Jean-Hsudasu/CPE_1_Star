#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char input[2000]={0};//這裡是指輸入的密文 
	char key[]="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./'";//這個是密文解碼需要的資料 
	//char key[]="`1234567890-=qwertyuiop[]asdfghjkl;'\\zxcvbnm,./";
	int i,j,l,n;//這裡的n是指被轉換成小寫(tolower) 
	while(gets(input))//用gets來存，因為輸入會有空格 
	{
		l=strlen(input);
			for(i=0;i<l;i++)
			{	
				n=tolower(input[i]);//這裡就是將全部輸入轉乘小寫 
				if(n!='`' && n!='1' && n!='q' && n!='w' && n!='a' && n!='s' && n!='z' && n!='x')//這裡要注意，因為題目要求，解碼是把"鍵盤上的文字"向左兩格交換，如果是邊邊兩個記得要跳過 
				{
					for(j=0;j<47;j++)//因為key有47個字元 
					{
						if(n==' ')
						{
							printf(" ");
							break;
						}
						if(n==key[j])
						{
							printf("%c",key[j-2]);//這裡就是向左移兩格啦 
						}
					}
				}
			}
		printf("\n");
	}
	
 } 
