#include<stdio.h>
#include<stdlib.h>
/*
�o�@�D�D�`²��A������J�A�Q�n�]�X�Ӱj��(times)�A
�A��J��ӼƦr�A�N����Ƥ������_�Ƭۥ[�A��X���� 
*/ 
int main()
{
	int times;
	int min ,max;
	int sum;
	int i,j=1;
	scanf("%d",&times);
	while(times--)
	{
		sum=0;
		scanf("%d%d",&min,&max);
		if(min%2==1)//�o�̻ݭn�P�_�ڲĤ@�ӼơA�O�_���_�� 
		{
			for(i=min;i<=max;i+=2)
			{
				sum+=i;
			}		
		}
		else
		{
			for(i=min+1;i<=max;i+=2)//�p�G���O�ݭn�N��+1�q�_�ƺ� 
			{
				sum+=i;
			}
		}
		printf("Case %d: %d\n",j++,sum);
		
	 } 
 } 
