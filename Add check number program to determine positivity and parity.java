public class checkno {

	public static void main(String[] args) {
		java.util.Scanner sc=new java.util.Scanner(System.in);
		System.out.println("Enter the Number:");
		int n=sc.nextInt();
		if(n>0) {
			System.out.println("number is positive");
		}else {
			System.out.println("number is negative");
		}
		if(n%2==0) {
			System.out.println("number is even");
		}else {
			System.out.println("number is odd");
		}
		
	}
	

}
