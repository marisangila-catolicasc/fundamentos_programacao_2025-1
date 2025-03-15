programa {
  funcao inicio() {
    real valor_a,valor_b,valor_memoria
    escreva("Escreva o valor de A: ")
    leia(valor_a)
    valor_memoria = valor_a
    valor_a = 0
    escreva("Escreva o valor de B: ")
    leia(valor_b)
    valor_a = valor_b
    valor_b = valor_memoria
    escreva("O valor de A é: ",valor_a,"\n")
    escreva("E o valor de B é: ",valor_b)

  }
}
