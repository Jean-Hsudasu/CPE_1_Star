#include<stdio.h>
#include<stdlib.h>
/*
	�S�O�·Ъ��D�ؤF�A�����n��J�����H��]���d��(max_x�Amax_y)�A�A�ӿ�J�_�l�I(initial_x,initial_y)�P�@�}�l����V(E,W,S,N)
	�A�ӿ�J����(command)�A�P�_�̫᪺�I�|�b���̡A�åB!!�p�G�W�@�Ӿ����H���X�ɪ��I�A�o���������H�|���D�A�ä��|�A���e�X��!! 
*/
int main()
{
	char pre[100][100] = {};//�����X���I 
	char D[2];//�����H�@�}�l����� �A�n�`�N�D�ػ��O��J"�r��" 
	char command[1002] = {0};//������O
	int initial_x,initial_y;//�����H�@�}�l����l 
	int max_x,max_y; //�����H�ਫ���̤j�d�� 
	int i,j;
	int flag;//�P�_�O�_���X�ɥ� 
	scanf("%d%d",&max_x,&max_y);
	while(scanf("%d%d%s",&initial_x,&initial_y,D)==3)//�o�̭n�`�N!�r�ꤣ�[& 
	{
		char d = D[0];//�ڥu�n�r�ꪺ�Y 
		flag=0;//��l�� 
		scanf("%s",command);
		for(i=0;command[i]!='\0';i++)
		{
			if(command[i]=='F')
			{
				switch(d)
				{
					case 'N': initial_y++; break;
					case 'S': initial_y--; break;
					case 'E': initial_x++; break;
					case 'W': initial_x--; break;	
				}
			}
			else if(command[i]=='R')
			{
				switch(d)
				{
					case 'N': d='E'; break;
					case 'S': d='W'; break;
					case 'E': d='S'; break;
					case 'W': d='N'; break;	
				}
			}
			else //command[i]='L'
			{
				switch(d)
				{
					case 'N': d='W'; break;
					case 'S': d='E'; break;
					case 'E': d='N'; break;
					case 'W': d='S'; break;	
				}
			}
            if(initial_x < 0 || initial_y < 0 || initial_x > max_x || initial_y > max_y) //�P�_�O�_���X�� 
			{ 
                switch(d) 
				{
                    case 'N': initial_y--;break;
                    case 'E': initial_x--;break;
                    case 'W': initial_x++;break;
                    case 'S': initial_y++;break;
                }
                if(pre[initial_x][initial_y] == 1)//�o�̬O�n�O���O�_�������H�X�ɹL�A�p�G���A�n�O���A�åB�U�@�Ӿ����H�|���D����A���e!!�ҥH���|�A�X�ɡA�ҥHcontinue 
                {
                	continue;//�o�D�������r!! 
				}   
				flag=1;
				pre[initial_x][initial_y] = 1;//�O���X��!! 
                break;//�X�ɤF�A������X���סAflag=1					
			}
		}
		if(flag==0)
		{
			printf("%d %d %c\n",initial_x,initial_y,d);
		}
		else
		{
			printf("%d %d %c LOST\n",initial_x,initial_y,d);	
		}
 	}
 	return 0;
}
