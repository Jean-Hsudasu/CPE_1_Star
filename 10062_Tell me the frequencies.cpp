#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	判斷字串中各個字元的數量，數量小的先輸出，諾述兩項同輸出AS2較大的 
*/ 
int main()
{
	int i=0,j;
	int temp;//交換字元"數量"用 
	char str_temp;//交換字元用 
	char str[1001]={0};//字串最多會到1000 
	while(gets(str))//會包含"空" 
	{
		if(i!=0)printf("\n");//格式要求 
		int count_str[1001]={0};//初始化 
		int len = strlen(str);
		for(i=0; i<len; i++)
		{
			if(str[i]=='\0')
			{
				count_str[i]==0;//為了方便計算，只要是有判斷過的值都先給他"0" 
				continue;
			}	
			count_str[i]=1;
			for(j=i+1;j<len; j++)
			{
				if(str[i]==str[j])
        		{
                	count_str[i]++;
                	str[j]='\0';//避免重複判斷到 
        		}	
			} 
		}	
		for(i=0;i<len;i++)
		{	
			for(j=i+1;j<len;j++)
			{
				if(count_str[i]>count_str[j])//數量小的先輸出 
				{
					temp=count_str[i];
					count_str[i]=count_str[j];
					count_str[j]=temp;
					str_temp=str[i];
                	str[i]=str[j];
                	str[j]=str_temp;
				}
				else if(count_str[i]==count_str[j])//諾數量一樣，由AS2較大的先輸出 
				{
					if(str[i]<str[j])
					{
						temp=count_str[i];
						count_str[i]=count_str[j];
						count_str[j]=temp;
						str_temp=str[i];
	                	str[i]=str[j];
	                	str[j]=str_temp;						
					}
				}
			}
		}
		for(i=0;i<len;i++)
		{
			if(count_str[i]!=0)
			{
				printf("%d %d\n",str[i],count_str[i]);//這裡的str[i]會使用%d，是因為題目要求要輸出as2 
			}				

		}
		i++;//判斷格式用 
	}
	return 0;
} 

	
