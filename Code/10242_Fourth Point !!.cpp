#include<stdio.h>
#include<stdlib.h>
/*
	�o�O�@�D�������޿��D�ءA�P����|��Φ����A�D�ط|���A4���I�y��(x,y)�A���䤤�|������I�O�@�˪��A��X�@�˪��I��A�̷Ӥ��Pcase�D�X�ĥ|���I
	�n�ѥX�o�D�A�A�����n���D:
	1.����|��Ϊ����I����(�D�ĥ|���I�|�Ψ�)��"�ﳻ�I"�ۥ[���G�|����t��"�ﳻ�I"�ۥ[���G 
	2.�D�ب̧Ƿ|���|���I�A�����n�ŦX(1�B2���I�P��A3�B4���I�P��)�A�N��N�O���|�X�{1�B2�P�I�A3�B4�P�I�����p�o��(���n!!)
	3.�i�઺�P�Icase��:(1�B3)�B(1�B4)�B(2�B3)�B(2�B4)  
*/
int main()
{
	float ans_x,ans_y;
	float x1,y1;
	float x2,y2;
	float x3,y3;
	float x4,y4;
	while(scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)==8)
	{
		if(x1==x3 && y1==y3)
		{
			ans_x = x2+x4-x1;
			ans_y = y2+y4-y1;
			printf("%.3f %.3f\n",ans_x,ans_y);
		}
		else if(x1==x4 && y1==y4)
		{
			ans_x = x2+x3-x1;
			ans_y = y2+y3-y1;
			printf("%.3f %.3f\n",ans_x,ans_y);
		}
		else if(x2==x3 && y2==y3)
		{
			ans_x = x1+x4-x2;
			ans_y = y1+y4-y2;
			printf("%.3f %.3f\n",ans_x,ans_y);
		}
		else //x2==x4 && y2==y4
		{
			ans_x = x3+x1-x2;
			ans_y = y3+y1-y2;
			printf("%.3f %.3f\n",ans_x,ans_y);
		}	
	}
 } 
