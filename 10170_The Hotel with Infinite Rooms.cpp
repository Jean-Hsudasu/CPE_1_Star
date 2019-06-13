#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int people;//這裡假設是1 
	long long int day;//這裡假設是6
	/*所以我要算出:(一)1
				   (二)2 3
				   (三)4 5 6
				   所以答案是(三)
	  再看一個例子:people:3，day:10
	  			   (三) 3 4 5 
				   (四) 6 7 8 9 
				   (五) 10 
				   所以答案是(五) 
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
