programa {
  funcao inicio() {
    inteiro a, b ,inv

    escreva("Digite o valor de A: ")
    leia(a)

    escreva("Digite o valor de B: ")
    leia(b)

    inv = a
    a = b
    b = inv
    
    escreva("O novo valor de A sera: ", a, " e o valor de B: ",b )

  }
}
