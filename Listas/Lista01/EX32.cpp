/*
LISTA 01 - EXERCICIO 32
Escreva um programa que pe�a a data no formato "dd/mm/aaaa" e informe se ela � uma data v�lida.
*/

#include <iostream>

using namespace std;

//Fun��o que verifica se o ano � bissexto (P/ validar o dai 29 de fevereiro)
bool ehAnoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

//Fun�ao que verifica se a data � valida
bool ehDataValida(int dia, int mes, int ano) {
    // Verifica se o ano est� no intervalo v�lido
    if (ano < 1) {
        return false;
    }

    // Verifica se o m�s est� no intervalo v�lido
    if (mes < 1 || mes > 12) {
        return false;
    }

    // Define o n�mero de dias em cada m�s
    int diasNoMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Ajuste para fevereiro em ano bissexto
    if (mes == 2 && ehAnoBissexto(ano)) {
        diasNoMes[1] = 29;
    }

    // Verifica se o dia est� no intervalo v�lido para o m�s
    return dia >= 1 && dia <= diasNoMes[mes - 1];
}

//Programa principal
int main() {
    int dia, mes, ano;
    char barra1, barra2;

    // Entrada de dados
    cout << "Digite a data no formato dd/mm/aaaa (Com as barras): " ;
    cin >> dia >> barra1 >> mes >> barra2 >> ano;

    // Chama a fun��o para verificar se � uma data valida
    if (barra1 == '/' && barra2 == '/' && ehDataValida(dia, mes, ano)) {
        cout << "Data valida! :D" << endl;
    } else {
        cout << "Data invalida! :(" << endl;
    }

    return 0;
}

