#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int Hashmat,Opponents;
	long long int difference;
	while(scanf("%lld %lld",&Hashmat,&Opponents)==2)
	{
		if(Hashmat<Opponents)
		{
			difference = Opponents-Hashmat;
			printf("%lld\n",difference);
		} 
		if(Hashmat>=Opponents)
		{
			difference = Hashmat-Opponents;
			printf("%lld\n",difference);
		} 
	}
	
	
}
