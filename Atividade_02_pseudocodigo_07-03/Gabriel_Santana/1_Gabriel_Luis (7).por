programa {
  funcao inicio() {
  real valor_dolar, valor_converter, reais
  escreva("Digite o valor do dólar no dia de hoje:\n")
  leia(valor_dolar)
  escreva("Digite o valor em dólar que deseja converter:\n")
  leia(valor_converter)
  reais = valor_dolar * valor_converter
  escreva("São necessários R$", reais)
}
}