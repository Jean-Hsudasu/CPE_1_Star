#include<stdio.h>
#include<stdlib.h>
/*
�o�@�D�O�n�N10�i����2�i��A16�i����2�i��A�çP�_�䤤���h�֭�1
�����A��J�@�Ӽƭ�(times)�A�N��n�]�X���j��A���U�ӿ�J�n�P�_���Ʀr(number)�A�N��ݬ�10�i����2�i��|���X��1�F��16�i����2�i��|���X��1
�H�U���{���X 
*/
int main()
{
	int number;
	int times;
	int i,j;
	int ans1,ans2;//ans1:�H10�i��Ӭݦ��X��1;ans2:�H16�i��Ӭݦ��X��1
	scanf("%d",&times);
	while(times--)
	{
		ans1=0;
		scanf("%d",&number);
		i=number;//�]���b�P�_10�i��|���X��1��number�|�Q��g�A�ҥH�ڭ̳o�̦s�@��i������16�i��� 
		while(number>=1) 
		{ 
			ans1+=(number%2);//��0��1�A�ϥ��P�_��0�[�W�h�]�@�ˡA�ҥH�����[? 
			number/=2;//�p:7/2=3�A(�W����X1)�U�@���N�O�]3 	 
		} 
		ans2=0;
		while(i>0)//�o�D²�檺�a��O16�i�줣�|��abcdef�A�����P�_�N�n 
		{
			j=i%10;//�ڥu�n���ڨ��Ӽ� �p:265�A�ڥu�n5 
			if(j==0) ans2+=0;//�o�̴N�O��2�i�쪺�a��� �p 2 6 5=0010 0110 0101 
			if(j==1) ans2+=1;//0001
			if(j==2) ans2+=1;//0010
			if(j==3) ans2+=2;//0011
			if(j==4) ans2+=1;//0100
			if(j==5) ans2+=2;//0101
			if(j==6) ans2+=2;//0110
			if(j==7) ans2+=3;//0111
			if(j==8) ans2+=1;//1000
			if(j==9) ans2+=2;//1001
			i/=10;//����ڥᱼ�A�p:265 265/10=26 
		}
		printf("%d %d\n",ans1,ans2);		
	}
 } 
