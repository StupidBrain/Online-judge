import java.util.Scanner;
import java.util.StringTokenizer;
public class ZeroJudge {	
	public static void main(String[] args) {
		// TODO Auto-generated method stub		
		Scanner cin=new Scanner(System.in);		
		while(cin.hasNextInt()){
			int num=cin.nextInt();				
			if(num>check(num)){
				System.out.println("����");
			}
			else if(num<check(num)){
				System.out.println("�ռ�");
			}
			else{
				System.out.println("������");
			}
		}
		cin.close();
	}	
	public static int check(int num){
		if(num==1){
			return 0;
		}
		else{
			int factor=1;
			for(int i=2;i<num;i++){
				if(num%i==0){
					factor+=i;
				}
			}
			return factor;
		}		
	}
}
