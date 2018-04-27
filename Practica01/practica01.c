#include <stdio.h>


int main()

{
	
int return_value;
	
int numero;
	

	
printf("\n Introduzca un numero : \n");
	
    
scanf("%d", &numero);


	
	

printf("Creando procesos con fork\n");

	
	
printf("\n Creando proceso hijo \n");{
	
	            
int factorial = 1;
    

for(int i = 1; i <= numero; i++){
       

 factorial = factorial * i;
    }
    
   
 
printf("El factorial de %d es %d \n", numero , factorial);
	
	
}
	
		

printf("\nCreando proceso padre \n");{
		            

int sumatoria = 0;
        for(int i = 0; i <= numero; i++){
     
   
sumatoria = sumatoria + i;
        

}
    
    

printf("La sumatoria de %d es %d \n", numero, sumatoria);
	
	
}
        


}

 