#include<stdio.h>
#include<stdlib.h>
/*
�o�@�D�O�n�N�@�}�C�p1 2 3 4�C�ӳ��ۥ[1+1=2 1+2=3 1+3=4 1+4=5 2+2=4 2+3=5 2+4=6 3+3=6 3+4=7 
									 =>2 3 4 5 4 5 6 6 7 (���ͦ��ƦC)�A�ݬO�_������ 
*/
int main()
{
	int n;
	int NumberOne[2002]={0};//�@�}�l���}�C 
	int NumberSum[2002]={0};//�g�L�ۥ[�᪺�}�C 
	int i,j,k;
	int flag;//�P�_�O�_������ 
	int text=1;//�ĴX��case 
	while(scanf("%d",&n)==1)
	{
		flag=0;//�O�o�k�s 
		k=0;//�O�o�k�s 
		for(i=0;i<n;i++)
		{
			scanf("%d",&NumberOne[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				 NumberSum[k++] = NumberOne[i]+NumberOne[j];//�i��ۥ[ 
			}
		}
		for(i=0;i<=k;i++)
		{
			for(j=i+1;j<=k;j++)
			{
				 if(NumberSum[i]==NumberSum[j])
				 {
				 	flag=1;//�i���� 
				 }
			}
		}
		printf("Case #%d:",text++);
		if(flag==1)
		{
			printf(" It is not a B2-Sequence.\n");
		}
		else
		{
			printf(" It is a B2-Sequence.\n");	
		}
		printf("\n");
		
	}
 } 
