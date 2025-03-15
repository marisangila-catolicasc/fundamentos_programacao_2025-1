programa {
    funcao inicio() {
        inteiro A, B, temp

        escreva("digite o valor de A: ")
        leia(A)
        escreva("digite o valor de B: ")
        leia(B)

        escreva("valores antes da troca: A = ", A, ", B = ", B)

        temp = A
        A = B
        B = temp

        escreva("valores após a troca: A = ", A, ", B = ", B)
    }
}

