#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

long *factorial (long n){
     long i =1, f=1;
     long *r = (long*)malloc (1*sizeof(long));
     while(i<=n){
                 f =f*i;
     i++;
     }
      r[0] = f; 
      printf("Facotial de %ld es %ld", n,f);       
     return r;
}

void *factorial(void *args){
     long n = *((long*)args);
     
     return (void*)factorial(n);
     
}

int main (int argc, char **argv){
    
    printf("Introduzca el numero: ");
    scanf("%ld",&n);
  /*  if(n==-1)
    {
         exit(0);
     }*/
    pthread_t  thread[1];
    pthread_create(&thread[0],NULL,factorial_,&n);
    pthread_join(thread[0],NULL);
  
    return 0;
    
}
    
    
    
