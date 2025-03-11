programa {
  funcao inicio() {
    real compra, representante, impostos, valor_venda

    escreva("Qual o valor de compra do produto?\n")
    leia(compra)

    representante = compra * 0.2

    impostos = compra * 0.3

    valor_venda = compra + representante + impostos
    escreva("O valor da venda é de R$ ", valor_venda, ".")

  }
}
