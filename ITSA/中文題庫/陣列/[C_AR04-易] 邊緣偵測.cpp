#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int num=0;
	while((cin>>num)!=0){ 
		for(int i=1;i<=num;i++){//�|���ư�NUM���A�]�N�ONUM�ӹϧ�
			int row=0,column=0;
			cin >>row>>column;
			
			int graph[row][column];//�ŧi�}�C
			for(int j=0;j<=row-1;j++){
				for(int k=0;k<=column-1;k++){
					cin>>graph[j][k];
				}
			}//�즹�}�C���Ѫ��F 
			for(int l=0;l<=row-1;l++){
				for(int m=0;m<=column-1;m++){
						if(graph[l][m]==0){
							cout<<"_ ";
							
						}
						else{
							if(l>0&&graph[l-1][m]==0){
								cout<<"0 ";
					
							}	
							else if(l<row-1&&graph[l+1][m]==0){
								cout<<"0 ";
							}
							else if(m>0&&graph[l][m-1]==0){
								cout<<"0 ";
							}
							else if(m<column-1&&graph[l][m+1]==0){
								cout<<"0 "; 
							}
							else {
								cout<<"_ ";
								
							}
						} 
				}
				cout <<"\n";
			}
			if(i!=num){
				cout<<"\n";
			}
		}//��X��for loop
	}
	return 0;
}	
	


