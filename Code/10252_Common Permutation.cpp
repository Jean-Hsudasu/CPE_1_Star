#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char first[2002]={0};
	char secend[2002]={0};
	char ans[2002]={0};//�o�̬O�s"�����ƪ�"��r 
	int i,j,l,k=0;
	while(gets(first)&&gets(secend))
	{
		for(i=0;i<2002;i++)
		{
			ans[i]= ' ';//�O�o�n��l�� 
		}
		for(i=0;first[i];i++)//�o�̶}�l������� 
		{
			for(j=0;secend[j];j++)
			{
				if(first[i]==secend[j])
				{
					ans[k++]=first[i];
					secend[j]='0';//�O�o�n��secend[j]��l�ơA���M�U�@���S�|�P�_�� 
					break;//���ŦX�N���X�j�� 
				}
			}
		}
		l=strlen(ans);
		for(i='a';i<='z';i++)//�]���D�حn�D�n�q��r�p���}�l�ƦC 
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
