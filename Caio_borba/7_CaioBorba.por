programa {
  funcao inicio() {
  real valor_dolar, valor_reais, valor_cambio
  
  escreva("Insira o valor atual do dólar\n")
  leia(valor_cambio)
  escreva("Insira o valor em dólar a ser convertido\n")
  leia(valor_dolar)

  valor_reais = valor_cambio * valor_dolar

  escreva("O valor em dólar convertido para o real é: ", valor_reais) escreva(" reais")
  }
}
