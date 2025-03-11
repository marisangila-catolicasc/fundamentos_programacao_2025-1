programa {
  funcao inicio() {
    inteiro A, B, som, sub, mult, div, exp, restdiv
    escreva("Digite o primeiro valor: ")
    leia(A)
    escreva("Digite o segundo valor: ")
    leia(B)

    som = A + B
    sub = A - B
    mult = A * B
    div = A / B
    exp = A ^ B
    restdiv = A % B

    escreva("\nsoma de A com B: ", som)
    escreva("\nsubtração de A com B: ", sub)
    escreva("\nmultiplicação de A com B: ", mult)
    escreva("\ndivisão de A com B: ", div, ("valor arrendondado para baixo"))
    escreva("\nexponenciação de A com B: ", exp)
    escreva("\nresto da divisão de A com B:", restdiv)
  }
}
