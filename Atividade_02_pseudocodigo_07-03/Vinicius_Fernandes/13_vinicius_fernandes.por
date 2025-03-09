programa {
  funcao inicio() {
    inteiro A
    inteiro B
    real troca

    escreva("Digite o valor de A: \n")
    leia(A)
    
    escreva("Digite o valor de B: \n")
    leia(B)

    troca = A
    A = B
    B = troca

    escreva("Após a troca:\n")
    escreva("Valor de A: ", A, "\n")
    escreva("Valor de B: ", B, "\n")
  }
}