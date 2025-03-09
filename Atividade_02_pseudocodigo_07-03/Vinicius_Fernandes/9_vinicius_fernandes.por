programa {
  funcao inicio() {
    real valor_compra
    real valor_venda

    escreva("Qual foi o valor de compra ?\n")
    leia(valor_compra)

    valor_venda = valor_compra + (0.20 * valor_compra) + (0.30 * valor_compra)

    escreva("O valor total da venda dessa mercadoria é de: R$ ",valor_venda)
  }
}
