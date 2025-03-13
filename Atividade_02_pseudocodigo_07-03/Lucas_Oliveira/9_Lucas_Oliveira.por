programa {
  funcao inicio() {
    real valor_compra, representante, imposto
    escreva("Insira o valor de compra:\n")
    leia(valor_compra)
    representante = valor_compra * 0.2
    imposto = valor_compra * 0.3
    escreva("Valor de venda vai ser R$", valor_compra+representante+imposto)
  }
}
