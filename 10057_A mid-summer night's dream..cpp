#include<stdio.h>
#include<stdlib.h>
int main()
{
	int times;
	int number[202];
	int i,j;
	int temp;
	while(scanf("%d",&times)==1)
	{
		
		for(i=0;i<times;i++)
		{
			scanf(" %d",&number[i]);
		}
		for(i=0;i<times-1;i++)
		{
			for(j=i+1;j<times;j++)
			if(number[i]>number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
		if(times%2==1)//�_��case 
		{
			printf("%d",number[times/2]);//case1:�䤤��� 
			j=0;
			for(i=0;i<times;i++)
			{
				if(number[times/2]==number[i])//case2:�p��ƦC�����h��"�@�˪�"����� 
				{
					j++;
				}
			}
			printf(" %d",j);
			printf(" 1");//case3:�_�ƪ�����X1 
			
		}
		else//����case 
		{
			printf("%d",number[(times/2)-1]);//case1:�䤤��� 
			j=0;
			for(i=0;i<times;i++)
			{
				if(number[(times/2)-1]==number[i]||number[(times/2)]==number[i])//case2:�p��ƦC�����h��"�@�˪�"�����(���Ʀ���Ӥ����) 
				{
					j++;
				}
			}
			printf(" %d",j);
			printf(" %d",number[times/2]-number[(times/2)-1]+1);//case3:�N����"���"����Ƭ۴��A�[�@ 
		}
		printf("\n");
	}
 } 
