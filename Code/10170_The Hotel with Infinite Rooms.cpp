#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int people;//�o�̰��]�O1 
	long long int day;//�o�̰��]�O6
	/*�ҥH�ڭn��X:(�@)1
				   (�G)2 3
				   (�T)4 5 6
				   �ҥH���׬O(�T)
	  �A�ݤ@�ӨҤl:people:3�Aday:10
	  			   (�T) 3 4 5 
				   (�|) 6 7 8 9 
				   (��) 10 
				   �ҥH���׬O(��) 
	*/ 
	long long int x;
	while(scanf("%lld%lld",&people,&day)==2)
	{
		x=day;
		while(x>0)
		{
			x-=people;
			people++;
		}
		printf("%lld\n",people-1);	
	}	 
 } 
