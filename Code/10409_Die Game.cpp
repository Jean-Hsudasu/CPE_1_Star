#include<stdio.h>
#include<stdlib.h>
/*
	�o�@�D�p�G��"�����"���n���H�A�|����Y�O�@�ǡA²��ӻ��N�O��l�D�A������J�n��X���A�A�ӴN�O�ݻ���Ӥ�V�A�åB���T�w:
	 																					top=1,down=6,north=2,west=3,east=4,south=5;
	 																					�̫��Xtop���� 
*/
int main()
{
	int top,down,north,west,east,south;
	int temp;//�o�̭n�stop���ȡA���M�����p���V�ɡA�|�Q�~��(top=...) 
	int times;//�몺���� 
	char step[6];
	while(scanf("%d",&times)==1)
	{
		if (times==0) break;
		top=1,down=6,north=2,west=3,east=4,south=5;//�O�o�n�g�b�o�̡A������l�ơA���M�U�@���|��� 
		while(times--)
		{
			scanf("%s",&step);
			temp = top;
			if(step[0]=='n')//�N�R�U�ӡA�Q�@�U�N�|�X�ӵ��פF 
			{
				top = south;
				south = down;
				down = north;
				north = temp;
			}
			else if(step[0]=='w')
			{
				top = east;
				east = down;
				down = west;
				west = temp;
			}
			else if(step[0]=='e')
			{
				top = west;
				west = down;
				down = east;
				east = temp;
			}
			else//step=="south"
			{
				top = north;
				north = down;				
				down = south;
				south = temp;
			}
		}
		printf("%d\n",top);
	}
 } 
