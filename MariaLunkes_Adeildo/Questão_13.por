programa {
  funcao inicio() {
    inteiro a
    inteiro b
    inteiro c

    escreva("Digite um numero:  \n")
    leia(a)

    escreva("Digite outro numero: \n")
    leia(b)

    c = a
    a = b
    b = c

    escreva("O os valores invrtidos são: ", a, ", ", b)
  }
}
