programa {
  funcao inicio() {
    real A, B, C

    escreva("insira o valor de A: ")
    leia(A)
    escreva("insira o valor de B: ")
    leia(B)
    limpa()
    escreva("Antes: ", "\nA: ", A, "\nB: ", B)
    C = A
    A = B
    B = C
    escreva("\nDepois: ", "\nA: ", A, "\nB: ", B) 
  }
}
