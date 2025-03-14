programa {
  funcao inicio() {
  real quantia_em_dolar, cambio, reais

  escreva("quantos dolares voce quer comprar?\n")
  leia(quantia_em_dolar)

  escreva("qual o valor do câmbio?\n")
  leia(cambio)

  reais = quantia_em_dolar * cambio
  escreva("o valor presiso sera R$ ",reais,"\n")
  }
}
