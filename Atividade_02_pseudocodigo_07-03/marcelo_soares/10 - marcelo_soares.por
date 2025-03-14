programa {
  funcao inicio() {
    real valorInvestido
    real taxaJuros

    escreva("Digite o valor do seu investimento e saberá seu rendimento após 3 anos: \n")
    leia(valorInvestido)

    taxaJuros = ((5 / 100) * valorInvestido)*3

    escreva("O valor do seu investimento após 3 anos é: ", valorInvestido + taxaJuros)

  }
}
