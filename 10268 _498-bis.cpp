#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	/*
	�o�@�D�O�L���D�A�����ݭn�ƤJx���ȡA�A��J�C�@�Ӧ��誺�Y�ơA�i��L����Nx�ȱa�J 
	*/
	int x;//x�� 
	int coe[2002];//�Y�� 
	int i,j;
	int count;//�o�̥D�n�O��ڦ��X�ӫY��(��J�F�X��) 
	int sum;//�̫᪺���� 
	while(scanf("%d",&x)==1)
	{	
		count=0;
		sum=0;
		for(count = 0;  scanf("%d", coe+(count++) ) && (getchar() != '\n'); )
		j=0;
		for(i=count-2;i>=0;i--)//�o�̷|i=count-2�O�]���ڭn�q���ݶ}�l�p��A���ӴN�n-1�F�A�o�̦A-1�O�]���A�`�ƳQ�L���|�ܦ�0 
		{
			/*
			�իY�ƬO�a 3 2 1�A
			���l��:(3*x^2)+(2*x^1)+(1*x^0)
			�L����:(3*2*x)+(2*1*x0) 
			*/
			sum+=coe[i]*(j+1)*pow(x,j);//�o�̬O�����⦳�L���L��? 
			j++;
		}
		printf("%d\n",sum);	
	}
 } 
