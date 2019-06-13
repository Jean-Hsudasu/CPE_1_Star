#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char first[2002]={0};
	char secend[2002]={0};
	char ans[2002]={0};//這裡是存"有重複的"單字 
	int i,j,l,k=0;
	while(gets(first)&&gets(secend))
	{
		for(i=0;i<2002;i++)
		{
			ans[i]= ' ';//記得要初始化 
		}
		for(i=0;first[i];i++)//這裡開始做比較啦 
		{
			for(j=0;secend[j];j++)
			{
				if(first[i]==secend[j])
				{
					ans[k++]=first[i];
					secend[j]='0';//記得要把secend[j]初始化，不然下一次又會判斷到 
					break;//有符合就跳出迴圈 
				}
			}
		}
		l=strlen(ans);
		for(i='a';i<='z';i++)//因為題目要求要從單字小的開始排列 
		{
			for(j=0;j<l;j++)
			{
				if(ans[j]==i)
				{
					printf("%c",ans[j]);
				}	
			}
		}
		printf("\n");
	}
 } 
