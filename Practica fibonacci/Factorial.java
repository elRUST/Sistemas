package hiloo;


public class Factorial extends Thread {
	int fact = 1;
	private int n;
	
	public Factorial(int n){
		this.n=n;
		
		for(int i = 1; i<=n; i++){
			fact = fact * i;
		}
		System.out.println("El factorial de " + n + " es: " +fact);
	
	}

}
