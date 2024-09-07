/*
Lista 01 - EXERCICIO 65
Devido ao sucesso de sua lojinha, Walter Paraiba adquiriu uma panificadora, onde também pretende implementar a metodologia da tabelinha de preços.
Você foi contratado para desenvolver o programa que monte essa tabela de preços para no mínimo 1 e no máximo 50 pães.
Em seguida, o programa deve exibir o resultado na tela do terminal, considerando valores com duas casas decimais.
*/
#include <iostream>
#include <iomanip>

int main() {
    double preco_pao;

    // Solicita o preço do pão
    std::cout << "=> Preço do pão: R$ ";
    std::cin >> preco_pao;

    // Exibe a tabela de preços
    std::cout << "\nQuantidade - Valor R$\n";
    for (int quantidade = 1; quantidade <= 50; ++quantidade) {
        double valor_total = quantidade * preco_pao;
        std::cout << quantidade << " - R$" << std::fixed << std::setprecision(2) << valor_total << "\n";
    }

    return 0;
}
