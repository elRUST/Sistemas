package hiloo;

public class Main {

	public static void main(String[] args) {
		
		Hilo xd = new Hilo(1);
		xd.start();
		
		Sumatoria sum = new Sumatoria(2);
		sum.start();
		
		Primo pri = new Primo(2);
		pri.start();
		
		Factorial fac = new Factorial(5);
		fac.start();
		
		Fibonacci fib = new Fibonacci(0);
		fib.start();
		

	}

}
