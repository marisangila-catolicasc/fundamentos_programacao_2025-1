programa {
  funcao inicio() {
    real valor_inicial
    real valor_final
    inteiro taxa_juros
    inteiro ano

    ano = 3

    escreva("Quanto voce quer investir?")
    leia(valor_inicial)

    taxa_juros = 5
    valor_final = valor_inicial + (valor_inicial * taxa_juros * ano )

    escreva("Seu invetimento deu: ", valor_final, "\n")
  }
}
