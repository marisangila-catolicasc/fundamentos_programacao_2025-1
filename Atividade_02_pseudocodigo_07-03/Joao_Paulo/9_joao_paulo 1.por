programa {
  funcao inicio() {
    real valor_compra
    real valor_venda
    
    escreva("Digite o valor da sua compra:\n")
    leia(valor_compra)

    valor_venda = (0.2*valor_compra) + (0.3*valor_compra) + valor_compra 

    escreva("O valor da sua venda foi de: ", valor_venda)
  }
}
