#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int i,j,time,temp,n,x=0,sum,sum2;
	int a[3000];
	int b[3000];
	int mid=0;

	scanf("%d",&time);//�@�@�n�]�X���j�� 
	while(x<time)//�]�wx�]�@���j��[�@ 
	{
		//printf("���X�ӼƦr?");
		scanf("%d",&n);//�o�@�����j��n��"�X��"�Ʀr 
		sum = 0;//�U���|���� 
		sum2 = 0;//�U���|���� 
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);//�̧Ǧs���Ʀr 
		}
		//�H�U���N�Ʀr�i��ƦC 
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		//�H�W���N�Ʀr�i��ƦC 
		
		mid = a[n/2];//�ƦC�����X�����
		 
		for(i = 0;i < n;i++){
			sum+=a[i];//�N"�ҥH�Ʀr"�ۥ[ 
		}
		
		for(i = 0;i < n;i++){
			b[i]=abs(a[i]-mid);//�P����Ƭ۴� 
			sum2+=b[i];//�N"�P����Ƭ۴�Ʀr"�ۥ[ 
		}
		
		printf("%d\n",sum2);//�L�X�̲ת����� 
	
		
		x++;//�Nx�[�@		
	}
	return 0;
}
