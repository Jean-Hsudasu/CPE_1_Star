#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	�P�_�r�ꤤ�U�Ӧr�����ƶq�A�ƶq�p������X�A�խz�ⶵ�P��XAS2���j�� 
*/ 
int main()
{
	int i=0,j;
	int temp;//�洫�r��"�ƶq"�� 
	char str_temp;//�洫�r���� 
	char str[1001]={0};//�r��̦h�|��1000 
	while(gets(str))//�|�]�t"��" 
	{
		if(i!=0)printf("\n");//�榡�n�D 
		int count_str[1001]={0};//��l�� 
		int len = strlen(str);
		for(i=0; i<len; i++)
		{
			if(str[i]=='\0')
			{
				count_str[i]==0;//���F��K�p��A�u�n�O���P�_�L���ȳ������L"0" 
				continue;
			}	
			count_str[i]=1;
			for(j=i+1;j<len; j++)
			{
				if(str[i]==str[j])
        		{
                	count_str[i]++;
                	str[j]='\0';//�קK���ƧP�_�� 
        		}	
			} 
		}	
		for(i=0;i<len;i++)
		{	
			for(j=i+1;j<len;j++)
			{
				if(count_str[i]>count_str[j])//�ƶq�p������X 
				{
					temp=count_str[i];
					count_str[i]=count_str[j];
					count_str[j]=temp;
					str_temp=str[i];
                	str[i]=str[j];
                	str[j]=str_temp;
				}
				else if(count_str[i]==count_str[j])//�ռƶq�@�ˡA��AS2���j������X 
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
				printf("%d %d\n",str[i],count_str[i]);//�o�̪�str[i]�|�ϥ�%d�A�O�]���D�حn�D�n��Xas2 
			}				

		}
		i++;//�P�_�榡�� 
	}
	return 0;
} 

	
