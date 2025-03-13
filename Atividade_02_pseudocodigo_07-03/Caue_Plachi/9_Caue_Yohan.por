programa {
  funcao inicio() {
    real valor_venda, valor_compra, representante, imposto
    escreva("Valor da compra \n")
    leia(valor_compra)
    representante = valor_compra * 0.2
    imposto = valor_compra * 0.3
    valor_venda = valor_compra + representante + imposto
    escreva("O valor da venda será de ", valor_venda)
  }
}
