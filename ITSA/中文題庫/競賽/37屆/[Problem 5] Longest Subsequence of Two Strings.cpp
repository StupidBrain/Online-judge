#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
	char first[20];
	char second[20];
	while(scanf("%s",first)!=EOF){
		int max=0,tempCounter=0;
		fflush(stdin);
		scanf("%s",second);
		int i,j,k;
		int index=0;//�ΨӪ�ܧڤ��ĴX�Ӧr�F�A�]�����]��ڿ��
		//�F�ĤG�r�ꪺ�ĤG�Ӧr��
		//�A�U���N�u��q�T�}�l�ݡAindex�O�U�@�����_�l�� 
		int jumpOff=0;
		for(i=0;i<=strlen(first)-1;i++){
			for(jumpOff=0;jumpOff<=strlen(first)-2;jumpOff++){//�ΨӶ]�L�C
			//�@���n���Lfirst�r�ꪺ�ĴX�ӼơA�Q���L�����ӼƤ����Ӥ���A
			//�o�|�O�@�طs���i�� 
				for(j=i;j<=strlen(first)-1;j++){
					if(index>strlen(second)-1){
						break;
					}
					if(j!=jumpOff||j==i){//�p�Gj������ڭn���L����jumpOff��
										//�����쪺�r��Ĥ@�Ӧri�N�i�H�w��P�_ 
						for(k=index;k<=strlen(second)-1;k++){
							if(first[j]==second[k]){
								tempCounter++;
								index=k+1;
								break;
							}
						}
					}
					
				}
				if(tempCounter>max){
					max=tempCounter;//�W���զs���Ȯɩʳ̤j�r��Ʈ��Ӹ�MAX���  
				}
				tempCounter=0;//��p��̤j�r�ꪺ���k�s 
				index=0;//�b�o����ܲĤG�r���m��index�k�s
			}
		}
		printf("%d\n",max);	
	}
	return 0;	
} 
