#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int arr[9][9]={};
	memset(arr,0,sizeof(arr));
	while(scanf("%d",&arr[0][0])!=EOF){//��J�a1��
		int i=1; 
		for(i=1;i<=8;i++){//��J�Ĥ@�C��2��9�� 
			scanf("%d",&arr[0][i]);
		}
		int row=0,col=0;
		for(row=1;row<=8;row++){
			for(col=0;col<=8;col++){
				scanf("%d",&arr[row][col]);
			}
		}//�즹�����J�����A�L���~
		int detect=0,counter=0;//detect�O������p�G�����N���X�h�A1�O�� 
		//counter�պ�C�ӼƳ��u��X�{�@�� 
		row=0,col=0;
		i=0;
		int numTime[9]={};
		for(row=0;row<=8;row++){
			for(col=0;col<=8;col++){
				for(i=1;i<=9;i++){//�ΨӧP�_�L�O1~9�����@�Ӽ� 
					if(arr[row][col]==i){
						if(numTime[i-1]==1){//�N��b1�C�̭��H�Ʀr���Ʃ� 
							detect=1;//1�N���� 
							break;
						}
						numTime[i-1]=1;//�p�G�T�{�o�ӼƬO�h�ִN�i�H���U�@�ө� 
						break;
					}
				}
				if(detect==1){//�����N�@�����X�h 
					break;
				}
			}
			memset(numTime,0,sizeof(numTime));//�A����Ʀr���p�ƾ���l�� 
			if(detect==1){//�����N�@�����X�h
				break;
			}
		}
		memset(numTime,0,sizeof(numTime));//�A����Ʀr���p�ƾ���l��
		if(detect!=1){//�S�����~�~���ĤG���ˬd 
			for(row=0;row<=8;row++){
				for(col=0;col<=8;col++){
					for(i=1;i<=9;i++){
						if(arr[col][row]==i){
							if(numTime[i-1]==1){//�N��b1�C�̭��H�Ʀr���Ʃ� 
								detect=1;//1�N���� 
								break;
							}
							numTime[i-1]=1;//�p�G�T�{�o�ӼƬO�h�ִN�i�H���U�@�ө� 
							break;
						}
					}
					if(detect==1){//�����N�@�����X�h 
						break;
					}
				}
				memset(numTime,0,sizeof(numTime));//�A����Ʀr���p�ƾ���l��
				if(detect==1){//�����N�@�����X�h
					break;
				}
			}
		}
		if(detect!=1){
			int innerrow=0,innercol=0;
			for(row=0;row<=6;row=row+3){
				for(col=0;col<=6;col=col+3){
					memset(numTime,0,sizeof(numTime));//�A����Ʀr���p�ƾ���l��
					for(innerrow=0;innerrow<=2;innerrow++){//�@���P�_�@��3*3�����諬
						for(innercol=0;innercol<=2;innercol++){
							for(i=1;i<=9;i++){//�ΨӧP�_�L�O1~9�����@�Ӽ� 
								if(arr[innerrow][innercol]==i){
									if(numTime[i-1]==1){//�N��b1�C�̭��H�Ʀr���Ʃ� 
										detect=1;//1�N���� 
										break;
									}
									numTime[i-1]=1;//�p�G�T�{�o�ӼƬO�h�ִN�i�H���U�@�ө� 
									break;
								}
							}
							if(detect==1){//�����N�@�����X�h 
								break;
							}
						}
						if(detect==1){//�����N�@�����X�h
							break;
						}
					}
					if(detect==1){
						break;
					}
				}
				if(detect==1){
					break;
				}
			}
		} 
		if(detect==1){
			printf("no\n");
		}
		else{
			printf("yes\n");	
		}
	}
	return 0;
}
