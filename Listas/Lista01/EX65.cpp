/*
Lista 01 - EXERCICIO 65
Devido ao sucesso de sua lojinha, Walter Paraiba adquiriu uma panificadora, onde tamb�m pretende implementar a metodologia da tabelinha de pre�os.
Voc� foi contratado para desenvolver o programa que monte essa tabela de pre�os para no m�nimo 1 e no m�ximo 50 p�es.
Em seguida, o programa deve exibir o resultado na tela do terminal, considerando valores com duas casas decimais.
*/
#include <iostream>
#include <iomanip>

int main() {
    double preco_pao;

    // Solicita o pre�o do p�o
    std::cout << "=> Pre�o do p�o: R$ ";
    std::cin >> preco_pao;

    // Exibe a tabela de pre�os
    std::cout << "\nQuantidade - Valor R$\n";
    for (int quantidade = 1; quantidade <= 50; ++quantidade) {
        double valor_total = quantidade * preco_pao;
        std::cout << quantidade << " - R$" << std::fixed << std::setprecision(2) << valor_total << "\n";
    }

    return 0;
}
