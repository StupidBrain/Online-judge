#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
	int num=0;
	while(scanf("%d",&num)!=EOF){
			int graph[num+2][num+2];//�ŧi�}�C
			memset(graph,0,sizeof(graph));//������l�Ƭ��s 
			int j=0;
			int k=0;
			for(j=1;j<=num;j++){
				for(k=1;k<=num;k++){
					scanf("%d",&graph[j][k]);
				}
			}//�즹�}�C���Ѫ��F
			int bombCounter=0;
			int l=0,m=0;
			for(l=1;l<=num;l++){
				for(m=1;m<=num;m++){
						if(graph[l][m]==1){
							printf("0 ");
						}
						else{
							if(graph[l-1][m-1]==1){
								bombCounter++;

							}
							if(graph[l-1][m]==1){
								bombCounter++;
							}
							if(graph[l-1][m+1]==1){
								bombCounter++;
							}
							if(graph[l][m-1]==1){
								bombCounter++;
							}
							if(graph[l][m+1]==1){
								bombCounter++;
							}
							if(graph[l+1][m-1]==1){
								bombCounter++;
							}
							if(graph[l+1][m]==1){
								bombCounter++;
							}
							if(graph[l+1][m+1]==1){
								bombCounter++;
							}
							printf("%d ",bombCounter);
							
						}
						bombCounter=0;
				}
				printf("\n");
			}
			printf("\n");
	}
	return 0;
}
