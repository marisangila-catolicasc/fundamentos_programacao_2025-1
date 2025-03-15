programa {
  funcao inicio() {
  real valor_compra, valor_venda, representante, impostos
  escreva("Insira o valor de compra:\n")
  leia(valor_compra)
  representante = valor_compra * 0.2
  impostos = valor_compra * 0.3
  valor_venda = valor_compra + representante + impostos
  escreva("Valor de venda: ", valor_venda)
}
}