#include<stdio.h>
#include<stdlib.h>
/*
�o�@�D�ݭn�N�@�ӼƦr�ର2�i��A�íp��2�i�즳�X��1�A���n�p�ߡA��G�i�쪺��|�z! 
*/
char binary[10000000];//�o�̤@�w�n�ŧi�b�o�� 
int main()
{
	int number;//�ڭn��J���Ʀr 
	int j;//�o����G�i��|�Ψ� 
	int ans;//���X��1 
	while(scanf("%d",&number)==1)
	{
		if(number==0) break;//�տ�J�O0�����{�� 
		ans=0,j=0;//�O�o�k�s 
		printf("The parity of ");
		while(number>0)//��G�i�� 
		{
			binary[j]=number%2+'0';//�o�̭n�ϥ�"+��"�ন"�r��" 
			if(binary[j]=='1') ans++;
			number/=2;
			j++;	
		}
		while(j--) printf("%c",binary[j]);//��X�G�i�� 
		printf(" is %d (mod 2).\n",ans); 
	}
 } 
