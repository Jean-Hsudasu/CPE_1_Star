#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
#define PI acos(-1)
/*
�o�D�ܵL��A�N�O�b�ҧA�ƾ��ٰO�o�h�֡A�p�l���w�zor��P���A�٦��N�O�A�n���DPI�O�h�֡A�o�̥�acos(-1)��ܡA�]���p�G�A�g3.14159�A�D�بD��p���I��6��A�|���~�t 
*/ 
int main()
{
	double s,a;//s-->�a�y����(�a�y�b�|6440���n���)��ìP�����u�Z�� �F a-->�a�y�P��ìP�ҧ������� 
	char str[10];//��J�����ץi��O�����׭n�A���W60 
	double Straight_line_distance;//��ìP�����u�Z�� 
	double Arc_length;//��ìP�Һc�������� 
	while(scanf("%lf%lf%s",&s,&a,str)==3)
	{
		Straight_line_distance=0,Arc_length=0;
		if(str[0]=='m')//�p�G�O�����סA��60 
		{
			a/=60;
		}
		if(a>180)//�p�G���פj��180��360�h�� 
		{
			a-=360;
		}
		Arc_length=(s+6440)*2*PI*a/360;//���|*PI*(����/360) 
		Straight_line_distance=sqrt((s+6440)*(s+6440)*2-2*(s+6440)*(s+6440)*cos(a*PI/180));//b^2=a^2+c^2-2ac*cos(b)
		printf("%.6lf %.6lf\n",Arc_length,Straight_line_distance);//.6�O���p���I���6�� 
	}
	
	
}
