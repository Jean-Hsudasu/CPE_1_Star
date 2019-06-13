#include<stdio.h>
#include<stdlib.h>
/*
	這是一題複雜的邏輯題目，與平行四邊形有關，題目會給你4個點座標(x,y)，但其中會有兩個點是一樣的，找出一樣的點後，依照不同case求出第四個點
	要解出這題，你必須要知道:
	1.平行四邊形的中點公式(求第四個點會用到)兩"對頂點"相加除二會等於另兩"對頂點"相加除二 
	2.題目依序會給四個點，但須要符合(1、2兩點同邊，3、4兩點同邊)，意思就是不會出現1、2同點，3、4同點的情況發生(重要!!)
	3.可能的同點case有:(1、3)、(1、4)、(2、3)、(2、4)  
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
