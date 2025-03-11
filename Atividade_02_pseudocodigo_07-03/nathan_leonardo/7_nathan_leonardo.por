programa {
  funcao inicio() {
    real dolar, cambio, reais

    escreva("Digite o valor do cambio do dólar de hoje: ")
    leia(cambio)

    escreva("Digite a quantidade de dólares que deseja converter: ")
    leia(dolar)

    reais = dolar * cambio

    escreva("São necessarios R$", reais, " para comprar $",dolar," dólares.")


  }
}
