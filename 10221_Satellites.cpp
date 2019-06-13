#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
#define PI acos(-1)
/*
這題很無聊，就是在考你數學還記得多少，如餘弦定理or圓周長，還有就是你要知道PI是多少，這裡用acos(-1)表示，因為如果你寫3.14159，題目求到小數點第6位，會有誤差 
*/ 
int main()
{
	double s,a;//s-->地球圓邊(地球半徑6440不要算到)到衛星的直線距離 ； a-->地球與兩衛星所夾的角度 
	char str[10];//輸入的角度可能是分角度要再除上60 
	double Straight_line_distance;//兩衛星的直線距離 
	double Arc_length;//兩衛星所構成的弧長 
	while(scanf("%lf%lf%s",&s,&a,str)==3)
	{
		Straight_line_distance=0,Arc_length=0;
		if(str[0]=='m')//如果是分角度，除60 
		{
			a/=60;
		}
		if(a>180)//如果角度大於180用360去減 
		{
			a-=360;
		}
		Arc_length=(s+6440)*2*PI*a/360;//直徑*PI*(角度/360) 
		Straight_line_distance=sqrt((s+6440)*(s+6440)*2-2*(s+6440)*(s+6440)*cos(a*PI/180));//b^2=a^2+c^2-2ac*cos(b)
		printf("%.6lf %.6lf\n",Arc_length,Straight_line_distance);//.6是取小數點到第6位 
	}
	
	
}
