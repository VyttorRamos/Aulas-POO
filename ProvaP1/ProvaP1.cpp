/*
Vyttor Ramos - CJ3025136
Prova P1 - POO

1. Escreva um programa que receba um conjunto de valores inteiros. Em seguida, exiba um gráfico de barras horizontal,
simulando o histograma referente aos valores que foram informados.
*/

#include<iostream>
#include <vector>

using namespace std;

// Função para exibir o gráfico de barras horizontal
void exibirGraficoBarras(const vector<int>& valores) {

    //Calcuo para saber o total de colunas
    int totalColunas = 0;
    for (int valor : valores) {
        if (valor > totalColunas) {
            totalColunas = valor;
        }
    }

    cout << "\n> Total de Linhas: " << valores.size();
    cout << "\n> Total de Colunas: " << totalColunas;

    cout << "\n\n Grafico de barras horizontal:\n\n";
    for (int i = 0; i < valores.size(); i++) {
        if(i < 9)
            cout << i + 1 << "| ";
        else
            cout << i + 1 << "|";
        for (int j = 0; j < valores[i]; j++) {
            if(j < 9)
            cout << "* ";
            else
            cout << "*  ";
        }
        cout << endl;
    }
    for (int i = 0; i < 1; i++) {
        cout << "+ ";
        for (int j = 0; j < valores[i]; j++) {
            cout << " " <<j+1;
        }
    }
}

//Funçao Principal
int main(){

    cout << "\n Prova P1 - POO \n\n Vyttor Ramos \n\n 1. Escreva um programa que receba um conjunto de valores inteiros.";
    cout << " Em seguida, exiba um gráfico de barras horizontal, \n simulando o histograma referente aos valores que foram informados.\n\n";

    //Variaveis
    int n, valor;
    vector<int> valores;

    //Qnt de valores que o usuário deseja inserir
    cout << "Quantos valores deseja inserir? ";
    cin >> n;
    cin.ignore(80, '\n');

    //Le os valores e adiciona ao vetor
    for (int i = 0; i < n; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> valor;
        valores.push_back(valor);
    }

    // Exibe o gráfico
    exibirGraficoBarras(valores);

    return 0;
}


