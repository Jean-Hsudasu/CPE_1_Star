#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{	/*
	這題主要是數學題，只要把函式列好基本上就可以了。
	Win:p,Lose:q
	第一回合贏的機率:q^(k-1)*p
	第二回合贏的機率:(q^n)*q^(k-1)*p 這裡的(q^n)是指前一回合都輸
	所以我們可以有個通式(R回合):q^((R-1)*n)*q^(k-1)*p
	可以發現有個規律，公比為:q^n，首項為:q^(k-1)*p 
	我們來複習一下等比級數和的公式:(首項*(1-公比^x))/(1-公比)  這裡的X是指一共有幾列，也就是有幾個回合，這裡我們取大值100 
	*/ 
	int times;
	int persons;//有幾個人 
	double WinProbability;//贏的機率 
	double LoseProbability;//輸的機率 
	int whichpeople;//第幾個人贏 
	double ans;//最後那個人贏的機率 
	double qn;//q^n(也就是這題個公比)
	double qnx;//(q^n)^100 (假設數列到100列);
	double qk;//q^(k-1)*p; 
	scanf("%d",&times);
	while(times--)
	{
		persons=0;
		WinProbability=0;
		whichpeople=0;
		scanf("%d%lf%d",&persons,&WinProbability,&whichpeople);
		LoseProbability=1-WinProbability; 
		qn=pow(LoseProbability,persons);
		if(qn==1)
		{
			printf("0.0000\n");
			continue;
		}
		qnx=pow(qn,100);
		qk=pow(LoseProbability,whichpeople-1)*WinProbability;
		ans=((qk*(1-qnx))/(1-qn));
		printf("%.4lf\n",ans);
		
	}
	
 } 

