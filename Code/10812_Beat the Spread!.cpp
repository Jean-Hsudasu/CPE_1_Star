#include<stdio.h>
#include<stdlib.h>
/*�o�@�D���O�n�D�ⶤa_team�Ab_team����ơA�D�ط|���Ѥ��ƩM�M���Ʈt�A�G���@���ѧY�i*/
int main()
{
	int times;
	int sum,diff;
	int a_team,b_team;
	scanf("%d",&times);
	while(times--)
	{
		scanf("%d%d",&sum,&diff);
		a_team=(sum+diff)/2;
		b_team=(sum-diff)/2;
		if(a_team>=b_team&&a_team>=0&&b_team>=0&&(sum+diff)%2==0)//�o�̦���bug�]���ڭ̵{���|�N�p���I�����i��A�ҥH�ڭ̻ݭn�ϥ� "(sum+diff)%2==0"�ӧP�_ 
		{
			printf("%d %d\n",a_team,b_team);
		}
		else
		{
			printf("impossible\n");
		}
	}
 } 
