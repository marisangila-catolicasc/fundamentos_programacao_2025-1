programa {
    const real REPRESENTANTE = 0.20
    const real IMPOSTO = 0.30
  funcao inicio() {
    real valor_da_compra
    real valor_de_venda
      escreva("Digite o valor de compra da mercadoria!: ")
      leia(valor_da_compra)
      valor_de_venda = valor_da_compra + (valor_da_compra * REPRESENTANTE) + (valor_da_compra * IMPOSTO)
      escreva("O valor da venda dessa mercadoria é de: ", valor_de_venda)
  }
}
