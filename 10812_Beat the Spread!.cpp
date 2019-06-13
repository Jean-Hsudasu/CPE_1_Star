#include<stdio.h>
#include<stdlib.h>
/*這一題的是要求兩隊a_team，b_team的比數，題目會提供分數和和分數差，二元一次解即可*/
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
		if(a_team>=b_team&&a_team>=0&&b_team>=0&&(sum+diff)%2==0)//這裡有個bug因為我們程式會將小數點直接進位，所以我們需要使用 "(sum+diff)%2==0"來判斷 
		{
			printf("%d %d\n",a_team,b_team);
		}
		else
		{
			printf("impossible\n");
		}
	}
 } 
