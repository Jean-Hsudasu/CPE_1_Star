#include<stdio.h>
#include<stdlib.h>
/*
	��O�x���D�ءA�N�O"��a�p�C��"�A��������J�C�����j�p(n*m)�A�A�ӬO��J���̦��a�p�A�p�U�ҥ�:
																					...*
																					.*..
																					**..
																					..*.
													�̫�N�O�p��X�L�P�D"8��"�I,���X�Ӧa�p�A�p: 
																					112*
																					3*31
																					**31
																					23*1 
*/
char map[2002][2002];//�@�w�n�ŧi�b�̤W�� (�a�p��) 
char ans[2002][2002];//(�Ʀr��) 
int main()
{
	int i,j;
	int n,m;
	int cas=0;
	int temp;
	while(scanf("%d%d",&n,&m)==2)
	{
		
		cas++;
		if(n==0&&m==0) break;//�D�حn�D 
		if(n!=0&&m!=0&&cas!=1) printf("\n");//�榡�n�D 
		for(i=0;i<n;i++)
		{
			scanf("%s",&map[i]);//����"��"����J 
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				temp=0;//��l�� 
				if(map[i][j]=='*')//�p�G�O*�������L 
				{
					ans[i][j]='*';//�@�˿�X* 
					continue;
				}
				//�U�����޿����x���A�n�Q�@�U 
				if(j<m-1 && map[i][j+1] == '*') temp++;//���k�@�� 
				if(j>0 && map[i][j-1] == '*') temp++ ;//�����@�� 
				if(j<m-1 && i<n-1 && map[i+1][j+1] == '*') temp++;//���W�B���k�@�� 
				if(j>0 && i<n-1 && map[i+1][j-1] == '*') temp++;//���W�B�����@�� 
				if(j<m-1 && i>0 && map[i-1][j+1] == '*') temp++;//���U�B���k�@�� 
				if(j>0 && i>0 && map[i-1][j-1] == '*') temp++;//���U�B�����@�� 												
				if(i>0 && map[i-1][j] == '*') temp++;//���U�@�� 
				if(i<n-1 && map [i+1][j] == '*') temp++;//���W�@�� 
				
				ans[i][j] = temp + '0';//int��str				
			}
		}
		printf("Field #%d:\n",cas);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				map[i][j]='\0';//��l�ơA�קK�U�@�Ӱj��SŪ�� 
				printf("%c",ans[i][j]);
				ans[i][j]='\0';//��l�ơA�P�W 
			}
			printf("\n");
		} 		
	}
}	


