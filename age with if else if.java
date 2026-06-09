public class ifelseif {

	public static void main(String[] args) {
		java.util.Scanner sc=new java.util.Scanner(System.in);
		System.out.println("Enter your age:");
		int age=sc.nextInt();
		if(age<0) {
		    System.out.println("invalid age:");
		}else if(age<13){
			System.out.println("you are a child:");
		}else if(age<19){
			System.out.println("you are a teen:");
		}else if(age<50){
			System.out.println("you are Adult:");
		}else if(age<95){
			System.out.println("you are old:");
		}else if(age<4){
			System.out.println("you are a Infant:");
		}else {
			System.out.println("Dead");
		}
			

	}

}
