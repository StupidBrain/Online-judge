#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int num;
	while(scanf("%d",&num)!=EOF){
		while(num>0){
		fflush(stdin);
		int input[100]={};//�ɶ����}�C 
		int j,i=0;
		while(scanf("%d",&input[i])==1){
			if(input[i]==0){//0�N�O�ɶ������� 
				break;
			}
			//fflush(stdin);�[�F�N����ΪŮ��J�A�ڤ]������ԣ 
			i++;
		}
		int k=0,min=0,temp;//�o�q�O�ƧǪk 
		for(j=1;j<i-1;j++){
			min=j;
			for(k=j+1;k<i;k++){
				if(input[k]<input[min]){
					min=k;
				}
			}
			temp=input[j];
			input[j]=input[min];
			input[min]=temp;
		}
		int sum=0,counter=1;//�P�_:�Y�W�L�ɶ�����Ϊ�t�Ƥw�g��ɶ���W��t������@�˦h��M�N�˰��F 
		while(sum<=input[0]&&counter<=i-1){
			sum=sum+input[counter];
			if(counter==(i-1)&&sum<=input[0]){ 
				break;
			}
			else if(counter==(i-1)&&sum>input[0]){
				counter--;
				break;
			}
			else if(counter<(i-1)&&sum>input[0]){
				counter--;
				break;
			}
			else if(counter<(i-1)&&sum==input[0]){
				break;
			}
			counter++;
			
		}
		printf("%d\n",counter);
		num--;//����گ��J�X���ɶ��� 
		}
	}
	return 0;	
}
