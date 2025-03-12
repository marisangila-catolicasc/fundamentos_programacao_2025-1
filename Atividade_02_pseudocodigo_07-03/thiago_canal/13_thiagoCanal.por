programa {
  funcao inicio() {
    real variavel_A, variavel_B, temporaria

    escreva("Um valor para A: ")
    leia(variavel_A)
    escreva("Um valor para B: ")
    leia(variavel_B)
    limpa()
    
    escreva("Antes: \n")
    escreva("A: ", variavel_A, "\nB: ", variavel_B)
    temporaria = variavel_A
    variavel_A = variavel_B
    variavel_B = temporaria

    escreva("\nDepois: \n")
    escreva("\nA: ", variavel_A, "\nB: ", variavel_B)
  }
}
