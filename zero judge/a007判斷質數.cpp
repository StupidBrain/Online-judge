#include <stdio.h>
#include <stdlib.h>
int check(int num);
int prime[1000000]={2,3,5,7};//���쪺��ư}�C
void buildprime(); 
int main(int argc, char *argv[]) {
	int input=0;
	buildprime();//�إ߽�ƪ� 
	while(scanf("%d",&input)!=EOF){
		int i=0;
		int flag=0;
		if(check(input)){
			printf("���\n");
		}
		else{
			printf("�D���\n");
		}
	}
	return 0;
}
int check(int num){//�P�_�O�_����� 
	int i=0;
	for(i=0;prime[i]*prime[i]<=num;i++){
		if(num%prime[i]==0){
			return 0;//�N���O��� 
		}
	}
	return 1;
}
void buildprime(){//�إ߽�� 
	int currentPrime=7;//�ڲ{�b���7����� 
	int i=0,j=0;
	for(i=4,j=4;currentPrime<1000000;i++,j=6-j){//i�O�s��}�C��index�Aj�O2��|����������ƾ�
		 currentPrime=currentPrime+j;
		 if(check(currentPrime)==1){
		 	prime[i]=currentPrime;
		 }
		 else{
		 	i--;
		 }
	}
}

