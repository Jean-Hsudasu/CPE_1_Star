#include<stdio.h>
#include<stdlib.h>
/*�o�D�D�n�O�n�⧹������A�p1,4,9,16...*/
int main()
{
	int min,max;//��J�@�ӽd��p:1 6 
	int ans;//�d��̦��X�ӧ������� 
	int i,j;
	int Completely_squared[100002]={};//�o�̬O�s�Ҧ����������� 
	for(i=1;i*i<100001;i++)
	{
		Completely_squared[i]=i*i;//���ۤv���ӧ������誺���	
	}
 
	while(scanf("%d%d",&min,&max)==2)
	{
		ans=0;
		if(min==0&&max==0) break;
		for(i=min;i<=max;i++)
		{
			for(j=1;j*j<100001;j++)//�ݽd��̬O�_���������� 
			{
				if(i==Completely_squared[j])
				ans++;
				continue;
			}
		}
		printf("%d\n",ans);
	}

 } 
