/*
LISTA 01 - EXERCICIO 32
Escreva um programa que peça a data no formato "dd/mm/aaaa" e informe se ela é uma data válida.
*/

#include <iostream>

using namespace std;

//Função que verifica se o ano é bissexto (P/ validar o dai 29 de fevereiro)
bool ehAnoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

//Funçao que verifica se a data é valida
bool ehDataValida(int dia, int mes, int ano) {
    // Verifica se o ano está no intervalo válido
    if (ano < 1) {
        return false;
    }

    // Verifica se o mês está no intervalo válido
    if (mes < 1 || mes > 12) {
        return false;
    }

    // Define o número de dias em cada mês
    int diasNoMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Ajuste para fevereiro em ano bissexto
    if (mes == 2 && ehAnoBissexto(ano)) {
        diasNoMes[1] = 29;
    }

    // Verifica se o dia está no intervalo válido para o mês
    return dia >= 1 && dia <= diasNoMes[mes - 1];
}

//Programa principal
int main() {
    int dia, mes, ano;
    char barra1, barra2;

    // Entrada de dados
    cout << "Digite a data no formato dd/mm/aaaa (Com as barras): " ;
    cin >> dia >> barra1 >> mes >> barra2 >> ano;

    // Chama a função para verificar se é uma data valida
    if (barra1 == '/' && barra2 == '/' && ehDataValida(dia, mes, ano)) {
        cout << "Data valida! :D" << endl;
    } else {
        cout << "Data invalida! :(" << endl;
    }

    return 0;
}

