programa {
  funcao inicio() {
  real valor_investido, taxa_juros, valor_final
  inteiro anos = 3
  escreva("Digite o valor investido:\n")
  leia(valor_investido)
  taxa_juros = valor_investido * 0.05
  valor_final = valor_investido + (valor_investido * taxa_juros * anos)
  escreva("Valor final do investimento: ", valor_final)
}
}