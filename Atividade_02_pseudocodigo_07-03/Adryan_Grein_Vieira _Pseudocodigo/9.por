programa {
  funcao inicio() {
    real valor_compra, valor_representante,valor_imposto,valor_total,porcentagem_representante,porcentagem_imposto
    porcentagem_representante = 0.2
    porcentagem_imposto = 0.3
    escreva("Informe o valor de compra: ")
    leia(valor_compra)
    valor_total = (valor_compra +(valor_compra*porcentagem_representante))+(valor_compra*porcentagem_imposto)
    escreva("O valor total de venda da mercadoria é: R$",valor_total)
  }
}
