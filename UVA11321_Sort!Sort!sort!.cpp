#include<stdio.h>
#include<stdlib.h>
int main()
{
	int b[3000];
	int n,mod;//n�O"�@�@���X�ӼƦr"�n�ƦC�Amod�O"�i��ƦC"�һݭn��"�l��" 
	int i,j,temp=0;//�ƦC�һݭn���Ѽ� 
	while(true)//���w�]�L���j�� 
	{
		scanf("%d%d",&n,&mod);
		//printf("%d %d\n",n,mod);
		if(n==0&&mod==0) //�p�Gn�Pmod���O0���ܫh���X�j�� 
		{
			printf("0 0\n");
			break;
		}
		
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);//���s�J�Q�n�ƦC���Ʀr 
		}
		for(i=0;i<n-1;i++)//�T�O�C�ӼƦr���|�Q����A�ϥΨ�hfor�j�� 
		{
			for(j=i;j<n-1;j++)//�T�O�C�ӼƦr���|�Q����A�ϥΨ�hfor�j��  
			{
				//�H�U�}�l�ƦC 
				if(b[i]%mod > b[j+1]%mod)//�Ĥ@�B:�p�G�e����"�l��"����j"�n�洫" 
				{
					temp = b[i];
					b[i] = b[j+1];
					b[j+1] = temp;
				}
						if(b[i]%mod == b[j+1]%mod)//�{�b�w�g�ƦC�n�l��"���P"���F�A�ǳƱƦC�l��"�ۦP"�� 
						{
							if ( b[i]%2==0 && b[j+1]%2==1 || b[j+1]%2==-1 )//�ĤG�B:"�l��"�ۦP�ɡA��"����"�b"�_��"�e��"�n�洫" 
							{
					            temp = b[i];
								b[i] = b[j+1];
								b[j+1] = temp;
					        }  
							if((b[i]%2==1||b[i]%2==-1) && (b[j+1]%2==1||b[j+1]%2==-1) && b[i]<b[j+1])//�ĤT�B:"�l��"�ۦP�ɡA�ë�n���O"�_��"�ɡA��"�p��"�b"�j��"�e��"�n�洫" 
							{
								temp = b[i];
								b[i] = b[j+1];
								b[j+1] = temp;	
							}
							if(b[i]%2==0 && b[j+1]%2==0 && b[i]>b[j+1])//�ĥ|�B:"�l��"�ۦP�ɡA�ë�n���O"����"�ɡA��"�j��"�b"�p��"�e��"�n�洫" 
							{
								temp = b[i];
								b[i] = b[j+1];
								b[j+1] = temp;	
							}	
						}	
				}
				//�ƦC����		
			}
			printf("%d %d\n",n,mod);
			for(i=0;i<n;i++)
			{
				printf("%d ,%d\n",b[i],b[i]%mod);//�L�X�ƦC�n���ƦC�Ab[i]%mod��debug�� 
			}
		}	
	
	
}


