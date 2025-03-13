programa {
  funcao inicio() {
    real valor_investido
    real juros_simples
    real valor_final
  	 escreva("Digite o valor que você deseja investir:\nR$")
     leia(valor_investido)
     valor_final = valor_investido + (valor_investido * 0.05) * 3
     escreva("O valor do seu investimento após 3 anos será de R$", valor_final)



  }
}
