#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main(){
	int num,input,age[101];
	while((scanf("%d",&num)==1)&&num){//scanf�����n���\��J�Bnum����=0 
		memset(age,0,sizeof(age));
		for(int i=0;i<num;i++){
			scanf("%d",&input);
			age[input]++;//age[]���Ʀr�N���Ӧ~�֪����� 
		}
		int first=1;//�X��first=1��ܨS����X�L���
		for(int i=1;i<100;i++){
			for(int j=1;j<=age[i];j++){
				if(!first){
					printf(" ");
				}
				first=0;
				printf("%d",i);
			}
		} 
		cout<<endl;
	}
	
	
	return 0;
}
