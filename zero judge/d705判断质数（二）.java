import java.util.Scanner;
import java.util.StringTokenizer;
public class JAVA {	
	public static int[] prime=new int[1000000];//�إߤ@�ʸU�ӴӾ�
	public static int i=4;//�]��2�B3�B5�B7���M�W�ߩҥH���إߡA�M��q�ĥ|�ӽ�ƶ}�l��
	public static void main(String[] args) {
		// TODO Auto-generated method stub		
		Scanner cin=new Scanner(System.in);		
		prime[0]=2;
		prime[1]=3;
		prime[2]=5;
		prime[3]=7;
		buildprime();
		while(cin.hasNext()){	
			int num=cin.nextInt();
			if(num==0){
				break;
			}
			if(num==1){
				System.out.println("1");				
			}
			else if(check(num)==0){
				System.out.println("1");
			}
			else{
				System.out.println("0");
			}
		}
		cin.close();
	}	
	public static int check(int num){ 
		int k=0;
		for(k=0;k<i&&prime[k]*prime[k]<=num;k++){//�����������A�u�n�ˬd�����p��L���Ưण��㰣�L�N�n
			if(num%prime[k]==0){//�����ƴN�^��0
				return 0;
			}
		}
		return 1;//�O�N��1
	}
	public static void buildprime(){ 
		int currentPrime=7; 
		int j=4;
		for(i=4,j=4;i<=999999;i++,j=6-j){//��+2�M+4�h��O�]���h���o��Ӽƪ����ƴN�i�H�ٱ��ܦh�ɶ��F
			 currentPrime=currentPrime+j;
			 if(check(currentPrime)==1){
			 	prime[i]=currentPrime;
			 }
			 else{
			 	i--;
			 }
		}
	}
}
