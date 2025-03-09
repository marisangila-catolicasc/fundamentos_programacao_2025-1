programa {
  funcao inicio() {
    real valor_dolar_atual
    real converter_dolar
    real reais_necessarios

    escreva("Qual o valor do dólar atualmente ?\n")
    leia(valor_dolar_atual)
    escreva("Quantos dólares você deseja converter ?\n")
    leia(converter_dolar)

    reais_necessarios = valor_dolar_atual * converter_dolar

    escreva("São necessários R$ ",reais_necessarios ," para comprar ",converter_dolar ," dólares")
  }
}
