#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
	long long int first,second;//���ŧi�ݭn��J����ӼƦr 
	int ans=0;//�o�ӬO�s�̲צ��h�ֶi�� 
	int firstQuotient[1002];//�o�Ӱ}�C�O�s��}���Ʀr�A�Ҧp:1002 -> 1,0,0,2 
	int secondQuotient[1002];//�P�W 
	long long int mod;//�o�ӬO�����|�Ψ쪺�A�U���|���� 
	int i;
	while(scanf("%lld%lld",&first,&second)==2)
	{
		ans = 0;//�O�o�n�k�s�A���M�O�|�S�[�W�h��!! 
		if(first==0&&second==0) break;//�D�حn�D 
		for(i=9;i>=0;i--)//���U�Ӫ�����x����!!�n��Ʀr�@�Ӥ@�ө�}�A�s��}�C���Y 
		{
			mod=0;//���N���k�s 
			mod = pow(10,i);//�s�J�{�b����ơA�p:�@�}�l�Oi=9�A�ҥHmod=10^9=1000000000 
			firstQuotient[i]=first/pow(10,i);//�N�ڿ�J���Ʀr(first)�A���H�ثe����ơC�p:2999999999/1000000000=2 �A�N2�s��i[9]���Y 
			first=first%mod;//�O�o�n�A�Nfirst���@��ơA�p:2999999999%1000000000=999999999(�l��) 
		}		
		for(i=9;i>=0;i--)//�޿�@�ˡA�{�b����second 
		{
			mod=0;
			mod = pow(10,i);
			secondQuotient[i]=second/pow(10,i);
			second=second%mod;
		}
		for(i=0;i<10;i++)//�{�b�}�C�̤w�g����n���Ʀr��! 
		{
			if(firstQuotient[i]+secondQuotient[i]>=10)//�p��@�U���S���i���! 
			{
				firstQuotient[i+1]+=1;//�O�o�p�G���i��U�@�ӼƦr�n�b�[�@!�p:99+01=100(�i�F����!) 
				ans++;
			}
		}
		//�̫��X������! 
		if (ans==0)
		{
			printf("No carry operation\n.");
		}
		else if (ans==1)
		{
			printf("1 carry operation\n.");
		}
		else
		{
			printf("%d carry operations.\n",ans);
		}

	}
 } 
