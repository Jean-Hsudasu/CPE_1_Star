#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int number;//�o�ӬO�s�ڤ@�}�l��J���Ʀr�A�p:123456789 
	int numberQuotient[1002];//�o�̬O��"�Ĥ@��"�B��A���N�Ʀr��}��1 2 3 4 5 6 7 8 9�A�����[�_�ӡA�դj��"10"�A�h�n�i��"�ĤG��"�B�� 
	int numberQuotient2[1002];//�P�W 
	int numberQuotient3[1002];//�P�W 
	int mod;
	int i;
	int sum=0;//�o�̬O�s"�C�@��"��}��A���B�⪺�ȡC 
	while(scanf("%d",&number)==1)
	{
		sum=0;
		if(number==0) break;//�p�G��J0�A�����{�� 
		for(i=9;i>=0;i--)//�o�̥D�n�O��"��}�Ʀr" 
		{
			mod=0; 
			mod = pow(10,i);
			numberQuotient[i]=number/mod; 
			number=number%mod; 
		}
		for(i=9;i>=0;i--)//�b�ӧO�[�_�� 
		{
			sum+=numberQuotient[i];
		}
		if(sum<10)//�p�G�p��10�L�X���� 
		{
			printf("%d\n",sum);
		}
		else//�S�����ܡA�A�]�@�� 
		{
			for(i=1;i>=0;i--)
			{
				mod=0; 
				mod = pow(10,i);
				numberQuotient2[i]=sum/mod; 
				sum=sum%mod; 
			}
			sum=0;//�o�̰O�o�n�k�s�� 
			for(i=1;i>=0;i--)
			{
				sum+=numberQuotient2[i];//���M�o�̷|�֥[�� 
			}
			if(sum<10)//�P�W 
			{
				printf("%d\n",sum);		
			}
			else
			{
				for(i=1;i>=0;i--)
				{
					mod=0; 
					mod = pow(10,i);
					numberQuotient3[i]=sum/mod; 
					sum=sum%mod; 
				}
				sum=0;
				for(i=1;i>=0;i--)
				{
					sum+=numberQuotient3[i];
				}
				printf("%d\n",sum);	
			}
			
		}		
	}
 } 
