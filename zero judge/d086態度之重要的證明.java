import java.util.Scanner;
import java.util.StringTokenizer;
public class JAVA {	
	public static void main(String[] args) {
		// TODO Auto-generated method stub		
		Scanner cin=new Scanner(System.in);				
		while(cin.hasNext()){						
			String input=cin.nextLine();
			input=input.toUpperCase();
			if(input.charAt(0)=='0'&&input.length()==1){//�o�̬O�����D���A�D�ػ��J��0�N����N��O���@��0
				//���O�Y��J01234�h���ΰ���!!!!!
				break;
			}
			int sum=0;
			for(int i=0;i<input.length();i++){
				if(Character.isLetter((input.charAt(i)))==false){
					sum=-1;
					break;
				}
				else{
					sum+=input.charAt(i)-'A'+1;
				}
			}
			if(sum==-1){
				System.out.println("Fail");
			}
			else{
				System.out.println(sum);
			}			
		}	
		cin.close();
	}
		
}	
