programa {
  funcao inicio() {
    real valor_inicial, valor_final

    escreva("Para calcular o valor final do investimento, insira qual será o capital inicial a ser investido: \n")
    leia(valor_inicial)

    valor_final = valor_inicial + (valor_inicial * 0.5 * 3)

    escreva("O capital acumulado ao fim de 3 (três anos) será de: R$ ", valor_final, "!")
  }
}
