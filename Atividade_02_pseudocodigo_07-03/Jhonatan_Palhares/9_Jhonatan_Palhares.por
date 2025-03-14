programa {
  funcao inicio() {
    real venda, compra

    escreva("Qual o valor de compra do seu produto?\nR$:")
    leia(compra)

    venda = compra + compra*0.2 + compra*0.3

    escreva("\nO valor de venda do seu produto será de R$", venda, ".")
    
  }
}
