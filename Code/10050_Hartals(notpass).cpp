#include<stdio.h>
#include<stdlib.h>
/*
�o�D�O�@�D�ƾ��D�A�n��X�`�ѼƤ��A����}�|���Ѽ�(�@�ӬF�ҽ}�u�N����}�|)�A�H"�P����"�ӷ�Ĥ@�ѡA��J�`�Ѽ�(days)�A�A��J�F�Ҽ�(partys)
���O��J�U�F�Ҫ��}�u�g��(�p:3�A�N�O��ܨC�j3�ѴN�|�}�u�@��)�A��X�}�u�ѼơA���o�̭n�`�N�A��|�P�����P���񰲡A���p�J�}�u�Ѽ� 
*/
int main()
{
	int ncase;//�n�]�X��case 
	int days;//�Ucase�����`�Ѽ� 
	int day[2002];//�o�̬O�H0 1�Ӱ���ܡA0�N���\�}�|�A1�N���F�ҽ}�u 
	int partys;//�F�Ҽ�
	int party[202];//�U�F�Ҫ��}�u�g�� 
	int i,j;
	int daysum;//�`�}�u�Ѽ� 
	scanf("%d",&ncase);
	while(ncase--)
	{
		
		scanf("%d",&days);
		for(j=0;j<days;j++)
		{
			day[j]=0;//�o�̬O�N�̭��� 0 1 ����l�� 
		}
		scanf("%d",&partys);
		for(i=0;i<partys;i++)
		{
			scanf("%d",&party[i]);
			for(j=0;j<days;j++)//�q�Ĥ@�Ѷ}�l��O�_���F�ҽ}�u 
			{
				if((j+1)%party[i]==0 && (j+1)%7!=6 && (j+1)%7!=0)//j+1�O�]���ڭ̭n�q"�Ĥ@��"�}�l�A�M��p�G�I��P�������A�F�ҽ}�u���� 
				{
					day[j]=1;//�o�̭�n�A�p�G�F�Ҧ����Ш�ѼƤ]�S�t�A�ϥ�1�٬O1 
				}	
				if(day[j]==0)//�o�̻ݭnday[j]==0�O�]���o�̬O��"�U�ӬF��"���}�u�ѼơA�W�@�ӬF�Ҫ�1�i��|�Q�~���A�ҥH�ڭ̻ݭnday[j]==0 
				{
					day[j]=0;
				}
			}
		}
		daysum=0;//�o�̭n�O�o��l�� 
		for(i=0;i<days;i++)
		{
			daysum+=day[i];
		}
		printf("%d\n",daysum);	
	}
}
