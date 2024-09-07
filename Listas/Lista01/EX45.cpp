/*
LISTA 01 - EXERCICIO 45
Excreva um programa que peça a entrada de 10 números inteiros.
Em seguida, o programa deve exibir a quantidade de números pares e a quantidade de números impares.
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

    //Verifica quantos numeros são impares e pares
    for(const auto&numero : numeros){
        numero%2==0?++contPar:++contImpar;
    }
    cout << "Quantidade de numeros pares: " << contPar << endl;
    cout << "Quantidade de numeros impares: " << contImpar << endl;

}
