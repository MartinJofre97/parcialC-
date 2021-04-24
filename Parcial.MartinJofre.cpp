#include <iostream>
using namespace std;

int main() {


	//definimos las variables 
	float numero , poci, menor , promedio;
	int cont , contadorCero;
	int vec[9];
	
	do{
		
		//estructura para sumar al contador 
		
		cout<< "ingrese numeros a sumar: \n ";
		cin>>numero;
		promedio+=numero;
		
		// nos guarda el menor y la pocicion 
		if(numero < menor ){
			
			menor = numero;
			poci = cont;
			
		}
		// cuenta la cantidad de 0 ingresados 
		if(numero == 0){
			
			contadorCero ++;
		}
		
		vec[cont]=numero;
		
		
		cont++;
		
		
				
		
	}while(cont != 10  && numero >= -1 );
	
	
	
	//mostramos todos los datos guardados 
	cout<< "el menor es : "<<menor<<" y esta en la posicion " <<poci<<endl ;
	cout<<"el promedio es : " <<promedio/cont<<endl;
	cout<< " la cantidad de ceros es : "<<contadorCero<<endl;
	
	for(int i = 0 ; i <10 ; i++){
	cout<<"los numeros ingresados son "<<vec[i]<<" en la pocision  : "<<i<<endl;
	}
}



/* Ejemplo 

int main (){
	
char casos ;
cout<<"ingrese casos";
cin>>casos;
		
		
		//solo se puede usar caracteres y numeros 
		conparando en los casos 
switch(casos){
	
	case 'a' :
		cout<<"ingreso a"; 
		break;
		
	case 'b': 
	
		cout<<"ingreso b";
		break;	
		
	defaut :
	
		cout<<"ingreso un numero equivcado";	
}

}


*/

