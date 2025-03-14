programa {
  funcao inicio() {
    real reais, dolar, cambio

    escreva("Insira o valor do câmbio do dólar hoje: \n")
    leia(cambio)
  
    escreva("Agora, insira quantos dólares você gostaria de comprar: \n" )
    leia(dolar)

    reais = dolar * cambio

    escreva("Para comprar U$ ", dolar, ", você vai precisar de R$ ", reais, "!")
  }
}
