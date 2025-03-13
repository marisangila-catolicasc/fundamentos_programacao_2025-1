programa {
  funcao inicio() {
    
    real A
    real B
    real C

    escreva("escreva o valor da variável A","\n")
    leia (A)

     escreva("escreva o valor da variável B","\n")
    leia (B)

    C = A
    A = B
    B = C

     escreva("os valores foram trocados e A virou ",A," e B virou ",B,"\n")
  }
}
