programa {
  funcao inicio() {
    real investimento, retorno

    escreva("Qual o valor investido?\nR$")
    leia(investimento)

    retorno = investimento + (investimento*0.05*3)

    escreva("O retorno do seu investimento, em 3 anos, será de R$", retorno, ".")
    
  }
}
