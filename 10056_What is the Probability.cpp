#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{	/*
	�o�D�D�n�O�ƾ��D�A�u�n��禡�C�n�򥻤W�N�i�H�F�C
	Win:p,Lose:q
	�Ĥ@�^�XĹ�����v:q^(k-1)*p
	�ĤG�^�XĹ�����v:(q^n)*q^(k-1)*p �o�̪�(q^n)�O���e�@�^�X����
	�ҥH�ڭ̥i�H���ӳq��(R�^�X):q^((R-1)*n)*q^(k-1)*p
	�i�H�o�{���ӳW�ߡA����:q^n�A������:q^(k-1)*p 
	�ڭ̨ӽƲߤ@�U����żƩM������:(����*(1-����^x))/(1-����)  �o�̪�X�O���@�@���X�C�A�]�N�O���X�Ӧ^�X�A�o�̧ڭ̨��j��100 
	*/ 
	int times;
	int persons;//���X�ӤH 
	double WinProbability;//Ĺ�����v 
	double LoseProbability;//�骺���v 
	int whichpeople;//�ĴX�ӤHĹ 
	double ans;//�̫ᨺ�ӤHĹ�����v 
	double qn;//q^n(�]�N�O�o�D�Ӥ���)
	double qnx;//(q^n)^100 (���]�ƦC��100�C);
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

