#include<stdio.h>
#include<stdlib.h>
/*
�o�@�D�P��Ʀ����A�դ�����ƫh��X x is not prime.
				  �լ���ơA�ٻݭn�P�_�N�Ʀr�����O�_�]����ơA�p�G��ӳ����߿�X x is emirp.
				  												�p�G����ᤣ�O��Ƽƿ�X x is prime.
				  ex:19�����O��ơA��������ܦ�91�A���O��ƤF�A��X 19 is prime  
*/
int main()
{
	int number;
	int re_number;//����᪺�Ʀr 
	int i,j,temp;
	int key1,key2;//key1�P�_�쥻�Ʀr�ΡAkey2�P�_����᪺�Ʀr�� 
	while(scanf("%d",&number)==1)
	{
		key1=0,key2=0;//�����w�]���s 
		if(number==2) key1=1;//2����S�O�A�]��2�]�O��ơAkey1�������L1 
		for(i=2;i<number;i++)//�o�̶}�l�i��p��A�q2��number-1 
		{
			if(number%i==0)
			{
				key1=0;//�p�G���I��i�H�㰣�����L0�A�M�᪽������ 
				break;
			}
			key1=1;
		}
		re_number=0;//��l�� 
		if(key1==1)//�p�Gnumber�O��Ƥ~�����n�i�J 
		{
			temp=number;//�Nnumber�s�Jtemp�A�H�K����������Q�~�� 
			while(temp>0)//���� �A�Hnumber=123���� 
			{
				re_number*=10;//�o�Ӥ@�}�l���|�Ψ�F3*=10=30(������);32*=10=320   ;temp<0(���X�j��)
				j=temp%10;//3=123%10               ;2=12%10 		;1=1%10
				re_number+=j;//3=3+0			   ;32=30+2			;321=320+1
				temp/=10;//12=123/10(temp=10)	   ;1=12/10(temp=1) ;0=1/10(temp=0) 
			}
			if(number!=re_number)//�@�ˬݬO�_�|�Q�㰣 
			{
				for(i=2;i<re_number;i++)
				{
					if(re_number%i==0)
					{
						key2=0;
						break;
					}
					key2=1;
				}
			}		
		}
		if(key1==0)
		{
			printf("%d is not prime.\n",number);	
		}
		if(key1==1&&key2==0)
		{
			printf("%d is prime.\n",number);
		}
		if(key1==1&&key2==1)
		{
			printf("%d is emirp.\n",number);
		}	
	}
 } 
