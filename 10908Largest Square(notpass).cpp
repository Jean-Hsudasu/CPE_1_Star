#include<stdio.h>
#include<stdlib.h>
/*
�o�O�@�D���������D�ءA�����ݭn��J�n�D�X�Ӽ˥���(ncase)�A�A�ӿ�J�a�Ϫ����e(M,N)�A�A��J�a�I��(Q)
�զa�I�ƿ�J�O3�A�N�N��3���I�n�P�_�A����J�Ĥ@���I(x=2,y=5)�A�p�U�ϩҥܡA(2,5)=a�A
���U�ӧڭ̭n��X�H(2,5������)���h�֭Ӥ@�˪�a�i�H�զ��̤j������ΡA�D�X������Y�i�A(2,5)=3���(�P��8��a)
�A��J�ĤG���I...�H������ 
		
		  0 1 2 3 4 5 6 7 8 9
		0 a b b b a a a a a a
		1 a b b b a a a a a a
		2 a b b b a a a a a a
		3 a a a a a a a a a a 
		4 a a a a a a a a a a
		5 a a c c a a a a a a 
		6 a a c c a a a a a a
*/
int main()
{
	int M,N,Q;
	char maps[202][202];
	int ncase;
	int i,j;
	int x,y;
	scanf("%d",&ncase);
	while(ncase--)
	{
		scanf("%d%d%d",&M,&N,&Q);
		
		for(i=0;i<M;i++)
		{
			getchar();//�o�̥i��O�ȧ��Ū���A 
			for(j=0;j<N;j++)
			{
				maps[i][j]=getchar();//�@�Ӥ@�Ӧ줸�� 
			}
		}
		printf("%d %d %d\n",M,N,Q);//�L�X���B�e�B�a�I�� 
		while(Q--)
		{
			int flag=0;//�P�_�O�_���񪺦줸�ۦP�� 
			int a,b;
			int ans=1;//����� 
			scanf("%d%d",&x,&y);//��J�a�I 
			for(i=0;i<M||i<N;i++)//�����]��̤j��A�Ȧp�G�O���䪺�a�I�|�����D 
			{
				for(a=x-i;a<=x+i;a++)//���H�����I�Ҽ{�A�A�ӱNi+1�]�����I����8���I�A�o�Ӷ]�e(x) 
				{
					for(b=y-i;b<=y+i;b++) //�o�Ӷ]��(y)                        
					{
						if(a<0||b<0)//�p�G�]���I�O�t���A���i��! 
						{
							flag=1;
							break;	
						}
						if(maps[a][b]!=maps[x][y])//�p�G����줸���ۦP�Aflag=1�A���X�j�� 
						{
							flag=1;
							break;	
						}
					}	
				}
				if(flag==0)//�p�G�i�H�@����o�̴N�N���\��!��ans�ȧ�s�a 
				{
					ans=2*i+1;	
				}	
			}
			printf("%d\n",ans);		
		}			
	}
 } 
