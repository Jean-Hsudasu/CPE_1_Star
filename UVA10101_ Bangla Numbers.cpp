#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int num;//�]���D�ػ��̤j�|��15��ơA�ҥH�ڭ̥�long long int�����A�ӫŧi 
	int ans=1;//�o�ӬO���A�g�L�p���"�ݭn��X���Ʀr"(��) 
	int cas=1;//�o�ӬO���A��a�X�Ӱj��F 
	int ans1;//�o�ӬO�]���D�حn�D�A�p�G shata �᪺ kuti �O"�S���Ʀr"�� �����٬O�n��X kuti�A�ҥH���F�P�_�ڧ�W�@��ans�s�_�ӵ�ans1
		while(scanf("%lld",&num)==1)
		{	
			printf("%4d.",cas++);	
			if(num==0)//�p�G��X�O0�]�n�X�{��! 
			{
				printf(" 0");
			}
			ans=num/100000000000000;//15��� 
			if(ans!=0)//�o�̪��޿�O��کҿ�J���Ʀr�P�{�b����ƥh�����k�A�o��� 
			printf(" %d kuti",ans);
			num=num%100000000000000;//�o�̦A��{�b����ƪ�"�l��"��X�ӡA�n���U�@�� 
			
			ans=num/1000000000000;//13��� 
			if(ans!=0)//�P�W 
			printf(" %d lakh",ans);
			num=num%1000000000000;
			
			ans=num/10000000000;//11��� 
			if(ans!=0)//�P�W 
			printf(" %d hajar",ans);
			num=num%10000000000;
			
			ans=num/1000000000;//10��� 
			ans1=ans;//�o�̶}�l�����S�� 
			if(ans!=0)//�P�W 
			printf(" %d shata",ans);
			num=num%1000000000;
			
			ans=num/10000000;//8��� 
			if(ans!=0) 
			printf(" %d kuti",ans);
			if(ans==0&&ans1!=0)//�P�W�z�ŧi�һ����� 
			printf(" kuti");
			num=num%10000000;
			
			ans=num/100000;//6��� 
			if(ans!=0)//�P�W
			printf(" %d lakh",ans);
			num=num%100000;
			
			ans=num/1000;//4��� 
			if(ans!=0)//�P�W 
			printf(" %d hajar",ans);
			num=num%1000;
			
			ans=num/100;//3��� 
			if(ans!=0)//�P�W 
			printf(" %d shata",ans);
			num=num%100;
			
			
			ans=num;
			if(ans!=0)//�P�W
			printf(" %d",ans);
			printf("\n");//�O�o�n���� 
		}	
 } 
