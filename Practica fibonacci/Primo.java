package hiloo;

public class Primo extends Thread {
	int contador;
	private int n; 
	
	public Primo(int n){
		this.n=n;
		
		contador = 0;
		
		for(int i=1; i<=n; i++){
			if((n%i)==0){
				contador++;
			}
		}
		
		if(contador <=2){
			System.out.println("El " + n + " es primo");
		}
		else{
			System.out.println("El " + n + " no es primo");
		}
		
	}

}
