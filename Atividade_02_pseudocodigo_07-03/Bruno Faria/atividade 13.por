programa {
    funcao inicio() {
        inteiro A, B, temp

        escreva("Digite o valor de A: ")
        leia(A)

        escreva("Digite o valor de B: ")
        leia(B)

        temp = A
        A = B
        B = temp

        escreva("Após a troca:\n")
        escreva("A = ", A, "\n")
        escreva("B = ", B, "\n")
    }
}
