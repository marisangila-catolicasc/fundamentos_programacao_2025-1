programa {
  funcao inicio() {
    
    inteiro valor_a
    inteiro valor_b
    inteiro inversos

    escreva("digite um valor\n")
    leia(valor_a)
    escreva("digite outro valor\n")
    leia(valor_b)

    inversos = valor_a
    valor_a = valor_b
    valor_b = inversos

    escreva("os valores inversos são: ", valor_a , " e ", valor_b)

  }
}
