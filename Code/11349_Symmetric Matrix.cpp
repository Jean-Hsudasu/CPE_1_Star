#include<stdio.h>
#include<stdlib.h>
#define max 101
/*
�o�@�D�n�ڭ̭p��"��ٯx�}"�A���o�̪���ٯx�}�M�ڭ̼�������ٯx�}���I���P�A�䬰:
																		5 1 3
																		2 0 2
																		3 1 5
																		�o�˴N�O���ٯx�}�C
																		5 1 3
																		2 0 2
																		0 1 5
																		�o�˴N���O��ٯx�}�C
���D�ޥ�:
�����N��J�Ԧ��@���}�C ��:5 1 3 2 0 2 3 1 5�A�ڭ̷|�o�{�O��"�j��"  
*/
int main()
{
	int cases;//�o�ӬO�ڭ̭n�]�X���j�� 
	char str[2];//�o�Ӥ��ӭ��n�A�O�D�حn�D��J "N ="���F�� 
	int i,j;
	long long int number[max*max];//�]���o�̷|�W�Lint���x�s�Ŷ� 
	int flag;//�o�̬O�u�n�P�_�O�_����ٯx�}���a�� 
	int n;//�x�}���� 
	int text=1;//�j�馸�� 
	scanf("%d",&cases);
	while(cases--)
	{
		flag=0;
		scanf("%s %s %d",str,str,&n);//�o�̬O��Jn = 3���a��A��3������n 
		for(i=0;i<n*n;i++)
		{
			scanf("%lld",&number[i]);//�����s���@���}�C 
		}
		for(i=0;i<n*n;i++)
		{
			if(number[i]!=number[(n*n-1)-i]||number[i]<0)//�o�̭n�p�ߤ���O�t�� 
			{
				flag=1;//�p�G�o�{�����@�˪��A�Nflag�ܧ󬰤@ 
				goto end;//�]��end 
			}
		}
		end:
		printf("Test #%d: ", text++);
		if(flag)//=0
		{
			printf("Non-symmetric.\n");
		}
		else//=1
		{
			printf("Symmetric.\n");
		}
	}
}
