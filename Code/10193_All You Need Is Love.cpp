#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*
块и璶ゑ癸计舱(times)だ块计1籔计2琌硂ㄢ计尿搭搭箂
s1=10s2=210-2=88-2=66-2=44-2=22-2=0Θ块:All you need is love!
σ祇瞷籔―程そ计Τ闽空ぃ琌1碞Θ硂柑璶猔種计12常琌"2秈"常"﹃篈" 
*/ 
int main()
{
	char str_s[2002];//计1(﹃) 
	char str_l[2002];//计2(﹃) 
	int i,j,k;
	int l_s;//﹃(计1) 
	int l_l;//﹃(计2)
	int int_s;//计1
	int int_l;//计2
	int times;//Τ碭舱计 
	int temp;//―程そ计惠璶 
	scanf("%d",&times);
	for(k=0;k<times;k++)
	{
		scanf("%s%s",str_s,str_l);
		l_s=strlen(str_s);//璸衡﹃ 
		l_l=strlen(str_l);//璸衡﹃ 
		j=0,int_s=0;
		for(i=l_s-1;i>=0;i--)//硂柑钡ノ"じ"耞锣10秈(int) 
		{
			if(str_s[i]=='1')//空じ1碞璶 
			{
				int_s+=pow(2,j);
				j++;
			}
			if(str_s[i]=='0') j++;
		}
		j=0,int_l=0;
		for(i=l_l-1;i>=0;i--)//呸胯妓传Θ计2 
		{
			if(str_l[i]=='1')
			{
				int_l+=pow(2,j);
				j++;
			}
			if(str_l[i]=='0') j++;
		}
		while(int_l!=0)//硂柑―程そ计 
		{
			temp=int_s%int_l;
			int_s=int_l;
			int_l=temp;
		 }
		 printf("Pair #%d: ",k+1);
		 if(int_s==1) 
		 {
		 	printf("Love is not all you need!\n");
		 }
		 else
		 {
		 	printf("All you need is love!\n");
		 }	
	}
 } 
