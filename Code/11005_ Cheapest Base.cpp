#include<stdio.h>
#include<stdlib.h>
/*
�o�@�D��O�x���D�A²��ӻ��A�D�ط|�n�D�ڿ�J36�ӼƦr (0~35)���O���U�Ʀr�������A
�p�G�{�b���Ʀr�O15674�A�M��36�ӼƦr�A��10(0) 15(1) 2(2) 47(3) 9(4) 5(5) 6(6) 11(7) .....(8)(9)...��(35) 
���O�N��1-15 5-5 6-6 7-11 4-9�A���ͤF15+5+6+11+9=46
���ӭӨҤl�O10�i�쪺�A�D�حn�D�ڭ̺�X"2"��"36"�i��A�U�ӼƦr�������A�ç�X"�̤p��" 						 
*/
int main()
{
	int ncase;//���X��case
	int price[200];//�U�r��������
	int nextcase;//�b�Ucase�U�n��J�X�ӼƦr
	int number;//�n�Q�p�⪺�Ʀr
	int number2;//�]���n�p��C�Ӷi��A�ҥH�ڭ̭n�Nnumber2=number�A�H�K�Q�Y�� 
	int cheapest=20000001;
	int numberprice[200];//�ӼƦr���`����
	int i,j,k;
	scanf("%d",&ncase);
	for(i=0;i<ncase;i++) 
	{
		for(j=0;j<36;j++) scanf("%d",&price[j]);//��J36�ӻ��� 
		scanf("%d",&nextcase);
		printf("Case %d:\n",i+1);
		for(j=0;j<nextcase;j++)//�}�l�]�o��case���j�� 
		{
			cheapest=20000001;//�O�o�n�A�g�@���A���M�@�}�l�̤p�N�u���ܤp�F 
			scanf("%d",&number);
			printf("Cheapest base(s) for number %d:",number);
			for(k=2;k<=36;k++)
			{
				number2=number;//�]���n�p��C�Ӷi��A�ҥH�ڭ̭n�Nnumber2=number�A�H�K�Q�Y��
				numberprice[k-2]=0;//��l�� 
				for(k;number2>0;number2/=k)//�]�i�� 
				{
					numberprice[k-2]+=price[number2%k];
				}
				if(cheapest>numberprice[k-2])//��̤p�� 
				{
					cheapest=numberprice[k-2];	
				}
			}
			for(k=0;k<36;k++)
			{
				if(cheapest==numberprice[k])//�ݳ̤p���O�X�i�� 
				{
					printf(" %d",k+2);//�]���O�q2�i��}�l�A�ҥH+2 
				}
			}
			printf("\n");
		}
		if(i<ncase-1) printf("\n");//�D�خ榡�n�D 
	} 
}
