#include<iostream>
#include<cmath>
#include<cstring>
#include<stdio.h>
using namespace std;
int farray[40]={0};
int counter=1;
void fseries(){
	farray[0]=1;
	farray[1]=2;
	while(counter<38){//�Ψӫإߤ@�ӶO���ƦC�� 
		farray[counter+1]=farray[counter]+farray[counter-1];
		counter++;
	}
}

int main(){
	int num=0;
	fseries();//�إ߼ƦC��
	while(scanf("%d",&num)!=EOF){
		for(int i=1;i<=num;i++){
			int j=0;//�ΨӪ�ܶO�ƼƦC��index 
			int origininput;
			scanf("%d",&origininput);
			for(j=0;farray[j]<=origininput&&j<=38;j++){//����input�٭n�j���O�ƼƦr�A�M���@ 
					
			}
			j--;			
			
			int answer[50]={};
			int index=0;
			int input=origininput;
			while(input>0&&j>=0){
				if(farray[j]<input){//�p�G�i�H�Q�Y�ӶO�ƼƵ���A�h���@��N�O1 
					input=input-farray[j];
					answer[index++]=1;					
					/*
					answer=answer+1;
					answer*=10;*/
				}
				else if(farray[j]==input){//�p�G��n����Y�ӶO�Ƽƫh�᭱�C�@�쳣�O0 
					input=input-farray[j];
					answer[index++]=1;					
					for(int k=j-1;k>=0;k--){
						answer[index++]=0;
					}
				}
				else{//�p�Ginput�{�b��O�Ƽ��٤p�A�h�o�Ӧ�ƴN��s 
					answer[index++]=0;
				}
				j--;
			}
			printf("%d = ",origininput);
			for(int i=0;i<index&&i<50;i++){
				printf("%d",answer[i]);	
			}
			printf(" (fib)\n");						
		}
	}	
 	return 0;
}


