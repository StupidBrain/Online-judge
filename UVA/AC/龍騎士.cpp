#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;
int dragon[20000],knight[20000]; 
int main(){
	int dnum=0,knum=0;//�s�M�M�h���Ӽ� 
	while((scanf("%d%d",&dnum,&knum))==2&&dnum&&knum){//��dnum�M knum���O0�ɴN���� 
		for(int i=0;i<dnum;i++){
			scanf("%d",&dragon[i]);
		}
		for(int i=0;i<knum;i++){
			scanf("%d",&knight[i]);
		}
		sort(dragon,dragon+dnum);
		sort(knight,knight+knum);
		int sum=0;//�ΨӺ��
		int index=0;
		int count=0;//�⦳��F�X���Y 
		for(int i=0;i<knum;i++){
			if(knight[i]>=dragon[count]){
				sum=sum+knight[i];
				count++;
				if(count==dnum){
					break;
				}
			}
		}
		if(count==dnum){
			printf("%d\n",sum);
		}
		else{
			printf("Loowater is doomed!\n");
		}
		
	}
	return 0; 
}
