programa {
  funcao inicio() {
    
    real A
    real B
    real c

    escreva("escreva o valor da viriavel A","\n")
    leia (A)

     escreva("escreva o valor da viriavel B","\n")
    leia (B)

    c = A
    A = B
    B = c

     escreva("o valor foram trocados e A virou ",A," e B virou ",B,"\n")
  }
}
