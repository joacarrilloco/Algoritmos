
public class Main {

	public static void main(String args[]){
		int n = 70;
		
		long i = 1, j = 1;
		
		System.out.println( "0 1 ");
		
		for( int it = 0; it < n; it ++ ){
			System.out.println( (it + 1) + " " + j );
			j = j + i;
			i = j - i;
		}
		
	}
}
