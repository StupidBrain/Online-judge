#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
	char inputS[100]={};
	while(gets(inputS)!=NULL){//��J�ڪ��r��
			char inputS[100]={};
			float col=0;
			char sym;//��J�Ÿ� 
			scanf("%c",&sym); 
			int row=0;//��J�n�X�C
			scanf("%d",&row);
			col=2.0*(strlen(inputS)/(float)row)-1;//�o�O�b�㰣�����p�U 
			int icol=0;//�|���ˬd�O�_����
			icol=2*(strlen(inputS)/row)-1;
			if(icol!=col){//�N���㰣 
				col=2.0*((strlen(inputS)/row)+1)-1;
			}
			int finalcol=0;
			finalcol=(int)col;
			char graph[row][finalcol];
			memset(graph,'0',sizeof(graph));//����GRAPH�}�C����l�Ƭ�0 
			printf("\nrow:%d col:%d",row,col);
			int j=0;//��X 
			for(j=0;j<strlen(inputS);j++){
				printf("%c",inputS[j]);
			}printf("\n");
			//�즹�}�C���駹�F
			j=0;
			int i=0;
			for(i=0;i<row;i++){
				for(j=0;j<finalcol;j++){
					printf("%c ",graph[i][j]);
					
				}
				printf("%d",i);
				printf("\n");
			}
			
			printf("\n");
	}
	
	return 0;
}
