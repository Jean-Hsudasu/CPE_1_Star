#include<stdio.h>
#include<stdlib.h>
/*
�o�@�D�ݦ������A�����èS���Q�����x���A�N�Q�i���ର�O���ƦC�C
�O���ƦC:
�qi=2�}�l�A�̧ǱN�V�W��ӼƦC�ۥ[�AEX: 
	i	0	1	2	3	4
	x	1	2	3	5	8 
�t��k: 
�����A�ؤ@�ӶO���ƦC�A�A��J�ڭn�]�X���j��(times)�A��J�ݭn�ഫ����(number)�A��X�O���ƦC 
*/
int main()
{
	int Fib[2002];//�O���ƦC 
	int times;//�j��� 
	int number;//�ݭn�ഫ���� 
	int flag;//�P�_�O�_�}�l�A�������� 
	int i,j;
	Fib[0]=1;
	Fib[1]=2;
	for(i=2;i<39;i++)//�ضO���ƦC�A����i=39�N�n 
	{
		Fib[i]=Fib[i-1]+Fib[i-2];
	}
	scanf("%d",&times);
	while(times--)
	{
		scanf("%d",&number);
		printf("%d = ",number);
		flag=0;//�O�o�k�s 
		for(i=38;i>=0;i--)
		{
			if(number/Fib[i]==1)//�ݦ��S����ڭn����F�A�p17=13+3+1�A�o�̴N�O�n�P�_�O�_��13�o�ӽ�F(��F�Ӧ۵M�j��@) 
			{
				printf("1");
				flag=1;//�]���O�ƼƦC�ഫ��"1" "0"�A"1"�@�w�O�}�Y
				number%=Fib[i];//���p�o�̤w�g�N17=13+?�A��13�o�ӽ�F�A���U�ӳ�4(17-13)�A�ҥH�ϥξl��% 
			}
			else if(flag)//flag�@�w�n�O1�A�~���D�ഫ�O�_�}�l 
			{
				printf("0");
			}
		}
		printf(" (fib)\n");
	}
 } 
