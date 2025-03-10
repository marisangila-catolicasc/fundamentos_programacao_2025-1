programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    
  real compra_mercadoria
  real representante 
  real imposto 
  real valor_venda

  representante = 0.20
  imposto = 0.30

  escreva("Qual o valor de compra da mercadoria?\n")
  leia(compra_mercadoria)

  valor_venda = compra_mercadoria + (compra_mercadoria*representante) + (compra_mercadoria*imposto)
  escreva("O valor de venda desta mercadoria sob representante e impostos é de: ", valor_venda)
  }
}
