#include <iostream>
#include <vector>
#include <fstream>
 
using namespace std;
/*Desarrollar la clase matriz*/

class Matrix {
private:
    /*Atributos */
    std::vector<std::vector<double>> data;
    int filas;
    int cols;


public:
    /*Metodos*/
    /*Contructor 1 uno por defecto donde inicialmente solo se le pasen las dimensiones y todos los elementos sean ceros*/
    Matrix(int filas, int cols) : filas(filas), cols(cols), data(filas, std::vector<double>(cols, 0.0)) {} /*no estoy seguro*/

    /*Constructor 2 Por copia*/
    Matrix(Matrix &X);

    /*Constructor 3 recibir una matriz desde un archivo con formato txt*/
    /*INVESTIGAR COMO LEER ARCHIVOS .txt*/

    /*Metodo de impresión*/
    void Imprimir();
    
    /*Sobrecarga de la suma*/
    Matrix operator+(Matrix &x);
    
    /*sobrecarga de la resta*/
    Matrix operator-(Matrix &x);
    /*Sobrecarga de la multiplicacion de matrices*/
    /*por escalar*/
    /*INVESTIGAR SERIA ESCALAR POR MATRIZ DA COMO RESULTADO UNA MATRIZ*/
    Matrix operator*(double &x);

    /*por otra matriz*/
    Matrix operator*(Matrix &x);


    /*Metodo gradiente conjugado para resolver el problema Ax=b*/
    /*INVESTIGAR ALGORITMO DEL METODO*/
}


int main () 
{
    /*ingresemos una matriz*/

    /*Metodo gradiente conjugado para resolver el problema Ax=b*/
}

/*################################################ CONSTRUCTOR POR COPIA #######################################*/
Matrix::Matrix(Matrix &X){


}

/*################################################ CONSTRUCTOR POR DEFECTO #######################################*/
Matrix::Matrix(int filas, int cols){

    
}



/*################################################ FUNCION IMPRIMIR #######################################*/
void Matrix::Imprimir(){
    /*DEFINIR COMO IMPRIMIR UNA MATRIX*/
}

/*################################################ SOBRECARGA DE SUMA #######################################*/
Matrix Matrix::operator+(Matrix & c){
    /*DEFINIR COMO SUMAR DOS MATRICES*/


}
/*################################################ SOBRECARGA DE RESTA #######################################*/
Matrix Matrix::operator-(Matrix & c){
    /*DEFINIR COMO RESTAR DOS MATRICES*/


}


/*##################################### SOBRECARGA DE MULTIPLICACION DE MATRICES #######################*/
Matrix Matrix::operator*(Matrix & c){
    /*DEFINIR COMO MULTIPLICAR DOS MATRICES*/


}
/*#################################### SOBRECARGA DE MULTIPLICACION POR ESCALAR ##################*/
Matrix Matrix::operator*(double & c){
    /*DEFINIR COMO MULTIPLICAR MATRIZ Y ESCALAR*/


}


/*################################# METODO DE GRADIENTE CONJUGADO ##############################*/

void Matrix::Imprimir(){

    
}
