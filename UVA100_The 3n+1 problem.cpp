#include<stdio.h>
#include<stdlib.h>
int main()
{
	int first,last;//�ŧi���ƻP���ơC 
	int i,j;//�j��ݭn�A�U���|�����C 
	int now=1,max=1;//now�O�ثe�ҭp��쪺���ơAmax���Ҧ����Ƹ̳̤j�����ӼƦ� 
	int len;
	while(scanf("%d%d",&first,&last)==2)
	{
		max=1;//�O�o�C���j�鳣�n�Nmax=1�A�_�h�|�Q�W�Ӱj��Ҽv�T�C 
		if(first=<last)//�]���A���|�T�w�A�@�w�O����J�p���b��J�j�� 
		{
			for(i=first;i<=last;i++)//�]first��last�������Ҧ��ƭ� 
			{
				now=1;//�O�o�C���j�鳣�n�Nnow=1�A�_�h�|�Q�W��now�Ҽv�T�C 
				j=i;//�]���S�n�i�J�t�@�Ӱj��A�ҥH�ڭ̦b�]�w�@��j�A��i���|�]���U�����j��]���� 
				while(true)
				{
					if(j==1) break;//�p�G�p���j=1�A�h���X�j�� 
					if(j%2==1)//�D�حn�D 
					{
						j=3*j+1;
						now++;//���i�ӴN�N��j�٤��O1�A�ҥH�n�[�@�� ���� 
					}
					if(j%2==0)//�D�حn�D 
					{
						j=j/2;
						now++;//���i�ӴN�N��j�٤��O1�A�ҥH�n�[�@�� ���� 
					}
					if(now>max)//��j�p�աA�p�G�{�b��n�����Ƥ�쥻���̤j���٭n�j�A�h���N�L 
					{
						max = now;
					}
				}
			}
		printf("%d %d %d\n",first,last,max);
		}
		
		if(first>last)//�]���A���|�T�w�A�@�w�O����J�p���b��J�j��
		{
			for(i=last;i<=first;i++)//�@�U�޿�@�� 
			{
				now=1;
				j=i;
				while(true)
				{
					if(j==1) break;
					if(j%2==1)
					{
						j=3*j+1;
						now++;
					}
					if(j%2==0)
					{
						j=j/2;
						now++;
					}
					if(now>max)
					{
						max = now;
					}
				}
			}
		printf("%d %d %d\n",first,last,max);
		}
		
	}
 } 
