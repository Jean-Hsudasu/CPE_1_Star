#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,temp;//n�O��"�`�@"�n��J���r��ơAi,j�O�]�^��ΡAtemp�����|���� 
    char country[2001][30]={0};//�o�ӬO�s�Ҧ�����a�A�᭱��[30]�O���F�n����C��[2001]  
	char name[70];//�o�ӬO�s�H�W�A���M�i�H���ΡA���O�����|�Ψ� 
    scanf("%d",&n);//�ڤ@�@�n�]�X���j�� 
    
        int count[2001]= {0};//����l�ơA�o�̥N��C��"��a"��"�U��"���� 
        for(i=0; i<n; i++)//�o�̦��쪺�ӤF�A�տ�JSpain Donna Elvira�A�]��scanf���ॴ�Ů�A�ҥH�u�|�s��Spain�A�ѤU�������ᵹname�A�]�N�ODonna Elvira 
        {
            scanf("%s",country[i]);
            gets(name);
        }
        for(i=0; i<n; i++)//�o�Ӱj��A�O�b�N�C�Ӱ�a"�̧�"�P�_�A�p�G���@�˪�count[i]++ 
            for(j=i+1; j<n; j++)
                if(strcmp(country[i],country[j])==0)//�o�̴N�O�D�n�P�_�O�_���@�� 
                {
                    count[i]++;
                    country[j][0]='\0';//�o�ӫܭ��n��!�p�G�O�w�g���P�_�L����a�A�O�o"��l��"�A�H�K�������P�_�� 
                }
        for(i=0; i<n; i++)//�]���D�حn�D�A��X�n�qa�̧Ǩ�z�A�ҥH�ӱƦC�� 
        {
            for(j=i+1; j<n; j++)
            {
                if(country[j][0]=='\0')continue;//�p�G�w�g"��l�ƪ�"�O�o���L�A�~��U�@�Ӱj�� 
                if(strcmp(country[i],country[j])==1)//�o�̪��޿�O�A�իe�̤j���̡A�h��X���ȡA�Ϥ��A��̤j��e�̡A��X�t�� 
                {
                    strcpy(name,country[i]);//�o�̴N�O�b�洫 
                    strcpy(country[i],country[j]);
                    strcpy(country[j],name);
                    temp=count[i];//�O�o�o�̤]�n�@�_���L�ӡA���M�Ʀr�|�]�� 
                    count[i]=count[j];
                    count[j]=temp;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            if(country[i][0]!='\0')//�p�G��a�ƬO0���ܤ��ο�X 
                printf("%s %d\n",country[i],count[i]+1);
        }
    
    return 0;
}
