programa {
  funcao inicio() {
    real valor_compra
    real valor_venda

    escreva("Digite o valor de compra do seu produto: \n")
    leia(valor_compra)

    valor_venda = valor_compra + ((valor_compra * 0.2) + (valor_compra * 0.3))

    escreva("O valo de venda do seu produto será: ", valor_venda)
  }
}
