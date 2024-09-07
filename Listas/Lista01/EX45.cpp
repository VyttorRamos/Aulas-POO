/*
LISTA 01 - EXERCICIO 45
Excreva um programa que pe�a a entrada de 10 n�meros inteiros.
Em seguida, o programa deve exibir a quantidade de n�meros pares e a quantidade de n�meros impares.
*/

#include<iostream>
using namespace std;

//Programa Principal
int main(void){

    int contPar{0},contImpar{0}, numeros[10];

    //Leitura dos numeros
    for(int i = 0; i < 10; ++i){
        cout << "Insira o " << i+1 << "* numero: ";
        cin >> numeros[i];
    }

    //Verifica quantos numeros s�o impares e pares
    for(const auto&numero : numeros){
        numero%2==0?++contPar:++contImpar;
    }
    cout << "Quantidade de numeros pares: " << contPar << endl;
    cout << "Quantidade de numeros impares: " << contImpar << endl;

}
