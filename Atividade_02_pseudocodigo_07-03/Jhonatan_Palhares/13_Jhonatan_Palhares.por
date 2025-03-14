programa {
  funcao inicio() {
    inteiro a, b
    real c
    
    escreva("Escreva um valor A.\n")
    leia(a)
    escreva("\nEscreva outro valor B.\n")
    leia(b)

    c = a
    a = b
    b = c

    escreva("\nInvertendo, temos que A = ", a, " e B = ", b)

  }
}
