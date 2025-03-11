programa {
  funcao inicio() {
    // real = quantidade de dolares × cambio

    real usd, brl, cambio
    escreva("Digite a quantidade de dólares: U$D")
    leia(usd)
    escreva("Insira o valor do câmbio: ")
    leia(cambio)
    brl = usd * cambio

    escreva("O valor inserido convertido em reais é igual a: R$", brl)
  }
}
