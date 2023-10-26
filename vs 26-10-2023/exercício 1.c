#include<stdio.h>

int opcoesPagamento() {

    int opcao;

    do {
        printf("Opção: a vista com 10porcento de desconto");
        printf("\n Opção: em duas vezes (preço da etiqueta)");
        printf("\n Opção: de 3 até 10 vezes com 3porcento de juros ao mês (somente para compras acima de R$ 100,00).");
        printf("\n Digite o metodo de pagamento: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 3) {
            printf("\n Opcao invalida");
        }

    } while(opcao < 1 || opcao > 30);
    return opcao;
}

void pagarAVista(float totalCompra) {
    float desconto = (totalCompra * 0.10);
    float total = totalCompra - desconto;

    printf("\n Valor compra: %f", totalCompra);
    printf("\n Valor desconto: %f", desconto);
    printf("\n Valor final: %f", total);
}

void parceladoDuas(float totalCompra) {
    float parcela = totalCompra/2;
    printf("\n Valor compra: %f", totalCompra);
    printf("\n Valor parcela: %f", parcela);
    
}

void parceladoTresOuMais(float totalCompra) {
    int prestacoes;
    float parcela;
    float totalFinal, valorPrestacao;

    if (totalCompra < 100) {
        printf("\n Valor nao permite parcelar");
        return;
    }

    do {
        printf("\n Digite a quantidade de prestacoes: ");
        scanf("%d", &prestacoes);
        if (prestacoes < 3 || prestacoes > 10) {
            printf("\n Quantidade de prestacoes invalido");
        }
    } while(prestacoes < 3 || prestacoes > 10);
    
    totalFinal = (totalCompra * 0.03) + totalCompra;
    valorPrestacao = totalFinal / prestacoes;

    printf("\n Total da compra com juros: %.2f", totalFinal);
    printf("\n Total de cada prestacao: %.2f", valorPrestacao);

}

main() {

    int opcaoPagamento;
    float totalCompra;

    printf("\n Digite o total da compra: ");
    scanf("%f", &totalCompra);

    opcaoPagamento = opcoesPagamento();

    switch(opcaoPagamento) {
        case 1:
        pagarAVista(totalCompra);
        break;

        case 2:
        parceladoDuasVezes(totalCompra);
        break;

        case 3:
        parceladoTresOuMais(totalCompra);
        break;
    }

}