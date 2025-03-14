programa {
  funcao inicio() {

    real valor_compra, valor_representante, valor_imposto, valor_venda

    escreva("digite o valor da compra\n")
    leia(valor_compra)
    valor_representante = valor_compra * 0.2
    valor_imposto = valor_compra * 0.3
    valor_venda = valor_compra + valor_imposto + valor_representante
    escreva("valor de venda: R$", valor_venda)
  }
}
