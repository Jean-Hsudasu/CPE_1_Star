#include<stdio.h>
#include<stdlib.h>
/*
	�o�D��²��A�N�@�Ӫ�l�ƦC�Ѥp��j�ƦC�A��"�w�j�ƧǪk"�ƦC�A�p��n�ƦC�X���i�H�o�쵪�� 
*/ 
int main()
{
	int textdata;
	int len;
	int number[100];
	int numbertemp;
	int i,j;
	scanf("%d",&textdata);
	int ans;
	while(textdata--)
	{
		ans=0;
		scanf("%d",&len);
		for(i=0;i<len;i++)
		{
			scanf("%d",&number[i]);
		}
		for(i=0;i<len;i++)//�w�j�Ƨ� 
		{
			for(j=i+1;j<len;j++)
			{
				if(number[i]>number[j])
				{
					numbertemp=number[i];
					number[i]=number[j];
					number[j]=numbertemp;
					ans++;	
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
	
 } 
