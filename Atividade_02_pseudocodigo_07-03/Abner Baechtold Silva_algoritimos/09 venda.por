programa {
  funcao inicio() {
   real compra, representante, impostos, venda

  escreva("Digite o valor de compra da sua mercadoria: ")
  leia(compra)

    representante = compra * 0.20
    impostos = compra * 0.30
    venda = compra + representante + impostos

  escreva("\nO valor de venda de sua mercadoria é: ", venda)
  }
}
