programa {
  funcao inicio() {
    real valor_final, valor_investimento

    escreva("digite o valor do seu investimento : R$")
    leia(valor_investimento)

    valor_final = valor_investimento + (valor_investimento * 0.05 * 3)
    escreva("o valor do seu investimento é de: R$", valor_final)
    
  }
}
