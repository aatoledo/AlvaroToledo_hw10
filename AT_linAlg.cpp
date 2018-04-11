#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

//multiplicacion de matrices
//1 filas x y columnas m
//2 filas m y columnas y
//3 filas x y columnas y
int main (){
cout>> "Ingrese el # de filas de A"
int M;
cin>>(M);
cout>> "Ingrese el # de columnas de B"
cin>>(N);
mat1 = get_Matrix(M,N)
}

double** matrix_product (double** mat1, double** mat2, int x, int y, int m){
	int i;
	int j;
	int z;
        //Matriz
	double **mat3 = new double*[x];
	int i;
	for (i=0; i<x; i++){
		mat3[i] = new double [y];
	}
	for (i=0; i<x; i++){
		for(j=0; j<y; j++){
			//inicializamos la matriz
			mat[i][j] = 0;
			for(z=0; z<m; z++){
				mat3[i][j] += mat1[i][z]*mat2[z][j]
			}
		}
	}
	return mat3;		
}

//recibir matrices MxN
double ** get_Matrix (int M, int N){
	double **mat = new double*[M];
	int i;
	for (i=0; i<M; i++){
		mat[i] = new double [N];
	}
	//Le asignamos valores a la matriz
	int j;
	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			//llamamos al usuario
			cout<<"insetar valor"<<i<<","<<j<< " ";
			double var;
			cin>> var;
			mat[i][j] = var;
		}
	}
	return mat;
}

















