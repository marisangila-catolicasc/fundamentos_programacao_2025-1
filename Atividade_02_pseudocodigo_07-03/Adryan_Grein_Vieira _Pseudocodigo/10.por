programa {
  funcao inicio() {
    real valor_inicial, valor_final
    inteiro taxa_de_juros, anos_investimento
    taxa_de_juros = 0.05
    anos_investimento = 3
    escreva("Qual foi o valor de seu investimento? ")
    leia(valor_inicial)
    valor_final = valor_inicial+(valor_inicial*taxa_de_juros*anos_investimento)
    escreva("Após seu investimento dado o devido tempo, tu terás: R$", valor_final)
  }
}
