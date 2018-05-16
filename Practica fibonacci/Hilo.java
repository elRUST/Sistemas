package hiloo;

public class Hilo extends Thread {
	private int n;
	
	public Hilo(int n){
		this.n=n;
	}
	
	public void run(){
		if(isPar(n)){
			System.out.println("El " +n+ " es par");
		}
		else{
			System.out.println("El " +n + " es impar");
		}
	}
	
	private boolean isPar(int n){
		return (n%2==0);
	}

}
