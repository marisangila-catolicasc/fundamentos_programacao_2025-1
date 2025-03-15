programa {
  funcao inicio() {
    real valor_inicial, valor_final
    escreva("Qual o valor investido por Maria? ")
    leia(valor_inicial)
    valor_final = valor_inicial* 0.05 * 3 + valor_inicial
    escreva("O valor após 3 anos investidos será de: ", valor_final, "R$")

  }
}
