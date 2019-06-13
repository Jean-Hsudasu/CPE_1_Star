#include<stdio.h>
#include<stdlib.h>
int main()
{
	int times;
	int number[202];
	int i,j;
	int temp;
	while(scanf("%d",&times)==1)
	{
		
		for(i=0;i<times;i++)
		{
			scanf(" %d",&number[i]);
		}
		for(i=0;i<times-1;i++)
		{
			for(j=i+1;j<times;j++)
			if(number[i]>number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
		if(times%2==1)//计case 
		{
			printf("%d",number[times/2]);//case1:тい计 
			j=0;
			for(i=0;i<times;i++)
			{
				if(number[times/2]==number[i])//case2:璸衡计いΤぶ"妓"い计 
				{
					j++;
				}
			}
			printf(" %d",j);
			printf(" 1");//case3:计钡块1 
			
		}
		else//案计case 
		{
			printf("%d",number[(times/2)-1]);//case1:тい计 
			j=0;
			for(i=0;i<times;i++)
			{
				if(number[(times/2)-1]==number[i]||number[(times/2)]==number[i])//case2:璸衡计いΤぶ"妓"い计(案计Τㄢい计) 
				{
					j++;
				}
			}
			printf(" %d",j);
			printf(" %d",number[times/2]-number[(times/2)-1]+1);//case3:盢い丁"ㄢ"い计搭 
		}
		printf("\n");
	}
 } 
