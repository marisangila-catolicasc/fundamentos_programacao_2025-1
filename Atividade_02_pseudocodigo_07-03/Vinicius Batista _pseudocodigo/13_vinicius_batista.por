programa {
  funcao inicio() {
    inteiro valor_a
    inteiro valor_b
    inteiro inversor

    escreva("Digite um valor\n")
    leia(valor_a)
    escreva("Digite outro valor\n")
    leia(valor_b)
   
   inversor = valor_a
   valor_a = valor_b
   valor_b = inversor
   
    escreva("Os valores invertidos são: ", valor_a," e ", valor_b)
  }
}
