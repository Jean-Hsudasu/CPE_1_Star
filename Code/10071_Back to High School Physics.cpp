#include<stdio.h>
#include<stdlib.h>
/*
這題是一題簡單的物理題目，首先輸入一個t時間，與此時的v速度，做等加速運動，求2t時間後走了多少距離 
因為是做等加速度運動，所以其距離為:(v*t)/2，為三角形的面積，那過了2t時間後速度也會多了兩倍為2v，
所以最後的答案帶2v*2t/2=2vt  
*/
int main()
{
	int v,t;
	while(scanf("%d%d",&v,&t)==2)
	{
		printf("%d\n",2*v*t);
	}
 } 
