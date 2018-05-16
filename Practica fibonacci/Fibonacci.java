package hiloo;

import java.util.Scanner;

public class Fibonacci extends Thread {
	int fibo1;
	int fibo2;
	private int n;
	
	public Fibonacci(int n){
		this.n=n;
		Scanner sc = new Scanner(System.in);
		
		do{
			System.out.println("Introduce numero mayor que 1: ");
			n = sc.nextInt();
			
		}
		while(n<=1);
		System.out.println("Los " + n + " primeros numeros de la serie de Fibonacci son: ");
		fibo1=1;
		fibo2=1;
		
		System.out.println(fibo1 + " ");
		for(int i=2; i<=n;i++){
			System.out.println(fibo2 + " ");
			fibo2 = fibo1 + fibo2;
			fibo1 = fibo2 - fibo1;
		}
		System.out.println();
	}
}
