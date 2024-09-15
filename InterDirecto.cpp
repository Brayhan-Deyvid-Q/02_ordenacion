#include<iostream>
using namespace std;

void InterDirDer(int arr[], int m ){
	int aux;
	cout << "Las edades ordenadas es: " << endl;
	
	for (int i = 0; i<m-1; i++){
		for ( int j = i+1; j<m; j++){
			if (arr[i] > arr[j]){
				aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;
			}
		}
	}
	
	for ( int i = 0; i<m; i++){
		cout << arr[i] << " ";
	}
}

void InterDirIz(int arr[], int m){
	int aux;
	cout << "Las edades ordenadas es: " << endl;
	
	for (int i = 0; i<m-1; i++){
		for ( int j = m-1; j>i; j--){
			if (arr[j] < arr[j-1]){
				aux = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = aux;
			}
		}
	}
	
	for ( int i = 0; i<m; i++){
		cout << arr[i] << " ";
	}
}

void InterDirCen(int arr[], int m ){
	int aux;
	bool sen;
	
	for ( int i = 0; i<m-1; i++ ){
		sen = false;
		
		for (int j=0; j<m-i-1; j++){
			if (arr[j] > arr[j+1]){
				
				aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
				sen = true;
			}
		}
		if (!sen){
			break;
		}
	}
	
	for ( int i = 0; i<m; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void InterDirBi(int arr[], int m ){
	int aux;
	int com =0;
	int ter = m-1;
	bool sen=true;
	
	cout << "Las edades ordenadas es: " << endl;
	
	while(sen){
		sen = false;
		
		for ( int i = com; i<ter; i++){
			if (arr[i] > arr[i+1]){
				aux = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = aux;
				sen = true;
				
			}
		}
		
		if (!sen)
			break;
			
		ter--;
		com = false;
		
		for (int i = ter; i>com; i--){
			if (arr[i]<arr[i-1]){
				aux = arr[i];
				arr[i] = arr[i-1];
				arr[i-1] = aux;
				sen=true;
				
			}
		}
		
		com++;
	}
	
	for(int i = 0; i<m; i++){
		cout << arr[i] << " ";
		
	}
}

int main(){
	int m, opcion;
	
	cout<<"Indique la cantidad de edades a ingresar: ";
	cin>>m;
	
	int arr[m];
	cout<<endl;
	cout<<"Ingrese las edades: "<<endl;
	for(int i=0; i<m; i++){
		cout<<"Ingrese la edad "<<i<<" : ";
		cin>>arr[i];
		cout<<endl;
	}
	
	cout<<"Indique el método de ordenacion a emplear para organizar los datos: "<<endl;
	cout<<"1) Ordenacion por intercambio directo por la derecha"<<endl;
	cout<<"2) Ordenacion por intercambio directo por la izquierda"<<endl;
	cout<<"3) Ordenacion por intercambio directo con senial"<<endl;
	cout<<"4) Ordenacion por intercamnio directo bidireccional"<<endl;
	cout<<"Opcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			InterDirDer(arr, m);
			break;
		case 2:
			InterDirIz(arr, m);
			break;
		case 3:
			InterDirCen(arr, m);
			break;
		case 4:
			InterDirBi(arr, m);
			break;
		default:
			cout<<"Valor ingresado incorrecto..."<<endl;
			break;
	}
	
	return 0;
}