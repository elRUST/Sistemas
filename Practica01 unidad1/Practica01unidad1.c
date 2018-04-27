long sumatoria=0;
 	long factorial=1;
	long fibonaci=0;
 	
 	int numero;
 	
 	printf("Ingresa un numero \n");
 	scanf("%d",&numero);
 	
 	
 	//numero par
 	if ( numero % 2 == 0 )
        printf( "El numero es par \n" );
    else
        printf( "El numero es impar \n" );
 	
 	
	 
	//numero primo 
	int a,i;
 	for( i=1;i<=numero;i++)
	{
    if(numero%i==0) 
		a++;
	}
 	
 	if(a==2)
	{
    printf("El numero es primo \n");
	}
	else
	{
    printf("El numero no es primo \n"); 
	}
	
	
	//sumatoria
	
	int r;
	for(r=1 ;r<=numero;r++)
		sumatoria=sumatoria+r;
 	
 	printf("La sumatoria es %ld \n",sumatoria);
 	
 	
 	//factorial
 	int b;
 	for(b=numero;b>1;b--)
 		factorial=factorial*b;
 		
 	printf("El factorial es %ld \n",factorial);
 	
 	//fibonnaci
 	
 	int x=0,y=1,z=0,u;
	for(u=1;u<=numero;u++) {
	z=y;
	y=y+x;
	
	x=z;
	}
	fibonaci=x;
	 printf("El nesimo numero de la serie de fibonaci es %ld",fibonaci);
 	
 	
 	return 0;
 }