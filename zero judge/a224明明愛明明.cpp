#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main(){
	char input[10001]={};
	while(scanf("%s",input)!=EOF){
		char checks[10001]={};
		int counter=0;
		for(int i=0;i<strlen(input);i++){
			if((input[i]<=90&&input[i]>=65)||(input[i]>=97&&input[i]<=122)){
				checks[counter]=input[i];
				counter++;
			}
		}//�즹����w�g�B�z�n�u����r���r��F
		int len=strlen(checks);
		bool seqcheck=true;//seqcheck�O�ˬd�o�Ƨǫᦳ�S����k�ܦ��^�� 
		int count[52]={};
		int cal=0;//���Ӱ�acsii�B�⪺int 
		for(int i=0;i<strlen(checks);i++){//��L�̳����}�C���A�M�p�ƱƧǪk���I�� 
			if(checks[i]<=90){
				cal=checks[i]-65;
				count[cal]++;
			}
			else{
				cal=checks[i]-97;
				count[cal]++;
			}
		}
		int count_odd=0;//�Ψӭp�⦳�X�Ӧr���O�_�ƪ��A�]���^��N�u�঳�@�ө_�� 
		for(int i=0;i<52;i++){
			if(count[i]%2!=0){
				count_odd++;
			}
			if(count_odd>1){
				printf("no...\n");
				seqcheck=false;
				break;
			}
		}
		if(seqcheck){
			printf("yes !\n");
		}
	}
	return 0;	
} 
