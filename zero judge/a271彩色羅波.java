import java.util.Scanner;
import java.util.StringTokenizer;
public class ZeroJudge {	
	public static void main(String[] args) {
		// TODO Auto-generated method stub		
		Scanner cin=new Scanner(System.in);
		int time=cin.nextInt();
		int[] rule=new int[6];	
		int count=0;
		for(int i=1;i<=time;i++){
			count=0;
			for(int j=0;j<=5;j++){
				rule[j]=cin.nextInt();//��J�W���魫���ƾ�
				if(j==2||j==3||j==4){
					rule[j]=-rule[j];
				}				
				//System.out.println(rule[j]);
			}
			int poison=rule[4];//�C�����r�Ҧ�����q
			int weight=rule[5];//��l���魫			
			cin.nextLine();
			String input=cin.nextLine();
			StringTokenizer eatSp=new StringTokenizer(input);
			while(eatSp.hasMoreTokens()){
				char temp=eatSp.nextToken().charAt(0);
				int tempI=temp-'0';
				if(tempI==0){
					if(count>0){//�p�G���r�ƶq�j��0�A�N�n�C��������
						weight+=poison;
					}		
					//System.out.println("���Y:"+weight);
					if(checkDead(weight)){	
						System.out.println("bye~Rabbit");
						break;
					}
				}
				if(tempI!=0){
					if(count>0){//�p�G���r�ƶq�j��0�A�N�n�C��������						
						weight+=poison;
						if(checkDead(weight)){
							System.out.println("bye~Rabbit");
							break;
						}
					}
					if(tempI-1==3){//�p��C��������q
						if(count==0){
							count++;
						}
						else{
							poison+=rule[4];//�p�G�S���r�h�C��������q�n�֥[�W�h
						}
					}				
					weight+=rule[tempI-1];									
					if(checkDead(weight)){
						System.out.println("bye~Rabbit");
						break;
					}
				}				
			}
			if(checkDead(weight)==false){
				System.out.println(weight+"g");
			}			
		}
		cin.close();
	}
	public static boolean checkDead(int weight){
		if(weight<=0){			
			return true;
		}
		return false;
	}
}
