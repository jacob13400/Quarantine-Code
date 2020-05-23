import java.util.Scanner;

public class Main {

		public static void main(String args[]) {
		Scanner scn=new Scanner(System.in);
		int onelength=scn.nextInt();
		int twolength=scn.nextInt();
		String one=scn.next();
		String two=scn.next();
		int t=scn.nextInt();
		char[] onestr_array=one.toCharArray();
		char[] twostr_array=two.toCharArray();

		char[] thirdarray=new char[onelength+twolength];
		int P=0;
		for(int i=0; i<one.length(); i++) {
			P=onelength-i-1;
			P+=Math.min(Math.max(t-i, 0), twolength);
			thirdarray[P]=onestr_array[i];
		}
		for(int i=0; i<two.length(); i++) {
			P=onelength+i;
			P-=Math.min(Math.max(t-i, 0), onelength);
			thirdarray[P]=twostr_array[i];
		}
		
		for(char ch: thirdarray) {
			System.out.print(ch);
		}
		
	}
}