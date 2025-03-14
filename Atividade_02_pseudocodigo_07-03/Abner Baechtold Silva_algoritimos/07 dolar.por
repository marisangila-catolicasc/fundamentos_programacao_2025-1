programa {
  funcao inicio() {
  real cambio, dolares, reais

  escreva("Digite o valor do câmbio do dólar de hoje: ")
  leia(cambio)
  escreva("Digite quantos dólares você deseja converter: ")
  leia(dolares)

   reais = dolares * cambio

  escreva("\nPara comprar ", dolares, " dólares, você precisará de ", reais, " reais.")
  }
}
