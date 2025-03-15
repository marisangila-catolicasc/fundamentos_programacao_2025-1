programa {
  const real imposto = 0.2
  const real representante = 0.3
  funcao inicio() {
    real valor_compra, valor_venda
    escreva("Qual é o valor da compra do produto? ")
    leia(valor_compra)
    valor_venda = imposto*valor_compra + representante*valor_compra + valor_compra
    escreva("O valor da venda será: ", valor_venda, "R$")
  }
}
