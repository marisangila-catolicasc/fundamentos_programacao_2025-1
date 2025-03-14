programa {
  funcao inicio() {
    real investimento
    real taxa_juros

    escreva("Digite o valor do seu investimento e saberá seu rendimento após 3 anos: \n")
    leia(investimento)

    taxa_juros= ((5 / 100) * investimento)*3

    escreva("O valor do seu investimento após 3 anos será de: ", investimento + taxa_juros)

  }
  }
}
