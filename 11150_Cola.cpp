#include<stdio.h>
#include<stdlib.h>

int main()
{
	int total;
	int n;
	while(scanf("%d",&total)==1)
	{	
		n = total; 
		while(n>2)
		{
			total+=n/3;
			n=n/3+n%3;
		}
		if(n==2) total++;
		printf("%d\n",total);
	}
 } 
