#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int alreadycheck(int index,int counter,int *arr,int num);
int main(int argc, char *argv[]){
	int time=0;
	while(scanf("%d",&time)!=EOF){
		while(time>0){
			int num=0;
			scanf("%d",&num);
			int arr[num];
			memset(arr,0,sizeof(arr));//0��ܨS���L�� 
			int index=0;
			int counter=0;
			int max=0;//�ΨӰO�̤j�ƪ�������m 
			int j=0;
			for(j=0;j<num;j++){//��l��������m 
				index=j;//������m
				counter=j+1;
				arr[index]=1;//1��ܰ��L���F
				int i=0;
				for(i=0;i<=num-1;i++){//��µ��L��num-1���A
				//�]���Ĥ@�Ӱ����������w�g�b�W��氵�L�F 
					if(arr[num-1]==1){//�p�G�̫�@��Arr���@(���L��)�A�N�ӵ��� 
						if(i==num-1){
							max=j;
							break;
						}
						else{
							break;
						}
					}
					index=alreadycheck(index,counter,arr,num);
					arr[index]=1;
				}
				memset(arr,0,sizeof(arr));//�b�@����l��arr 
			}
			printf("%d\n",max+1);//���� 
			time--;
		}
	}
	
	return 0;
}
int alreadycheck(int index,int counter,int *arr,int num){//�ΨӧP�_���ϰ��L���S 
	while(counter>0){
		if(arr[index]==1||counter>0){
			index++;
			if(index>num-1){//�N��index�z���F 
				index=index-num;
			} 
		}
		if(arr[index]==0){
			counter--;
		}
	}
	return index;
}
