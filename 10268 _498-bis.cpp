#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	/*
	這一題是微分題，首先需要數入x的值，再輸入每一個次方的係數，進行微分後將x值帶入 
	*/
	int x;//x值 
	int coe[2002];//係數 
	int i,j;
	int count;//這裡主要是算我有幾個係數(輸入了幾個) 
	int sum;//最後的答案 
	while(scanf("%d",&x)==1)
	{	
		count=0;
		sum=0;
		for(count = 0;  scanf("%d", coe+(count++) ) && (getchar() != '\n'); )
		j=0;
		for(i=count-2;i>=0;i--)//這裡會i=count-2是因為我要從尾端開始計算，本來就要-1了，這裡再-1是因為，常數被微分會變成0 
		{
			/*
			諾係數是帶 3 2 1，
			式子為:(3*x^2)+(2*x^1)+(1*x^0)
			微分後:(3*2*x)+(2*1*x0) 
			*/
			sum+=coe[i]*(j+1)*pow(x,j);//這裡是直接算有微分過的? 
			j++;
		}
		printf("%d\n",sum);	
	}
 } 
