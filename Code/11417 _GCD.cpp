#include<stdio.h>
#include<stdlib.h>
/*
�o�O�@�D²���D�A��J�@��n�A�M��]�D�ش��Ѫ��{���j��A�u�n�b�ۤv�g�ӳ̤j���]�ƧY�i 
*/ 
int GCD(int i,int j)//�D�̤j���]�� 
{
	int temp;
	while(j>0)
	{
		temp=i%j;
		i=j;
		j=temp;
	}
	return i;	
}
int main()
{
	int n;
	int i,j;
	int G;
	while(scanf("%d",&n)==1)
	{
		if(n==0) break;
		G=0;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
		    	G+=GCD(i,j);//�^�ǭȥ[�JG; 
			}	
		}
		printf("%d\n",G);
	}
 } 
