#include <iostream>
#include <stdlib.h>

void func(double valores_x, float x, int n);
void avanza(float dt,float dx, double valores_x, double sigval, int n);
void reemplazo(double valores_x, double sigval, int n);


//se definen las condiciones de frontera
void func(double valores_x, int n, float xmin, float dx){
	int i;
	double x; 
	for(i=0; i<n; i++){
		x=xmin+i*dx;
		if(abs(x)<=0.5){
			valores_x[i]=0.5;	
}	
		else{
			valores_x[i]=0;
}
}
}

//como va avanzando la ecuacion diferencial
void avanza(float dt,float dx, double valores_x, double sigval, int n){
	int c=1;
	int i;
	for(i=1; i<n-1; i++){
		sigval[i]=valores_x[i]-((c*dt)/dx)*(valores_x[i]-valores[i-1]);
}
}

void reemplazo(double valores_x, double sigval, int n){
	int i;
	for(i=0;i<n;i++){
		sigval[i]=valores_x[i];
}
}

int main(){
	int nt=700; //el numero de iteraciones
	float dt=0.001, dx=0.01, xmin=-2.0, xmax=2.0, t=0.0; 
	int tot=(xmax-xmin)/(dx+1);
	double *valores_x, *sigval;

	valores_x= new double[tot];
	sigval=new double[tot];

	func(valores_x, tot, xmin, dx);
	while(nt>=0){
		
		avanza(dt, dx, valores_x, sigval, tot);

		nt-=1;	
}
	



	return 0;
}



