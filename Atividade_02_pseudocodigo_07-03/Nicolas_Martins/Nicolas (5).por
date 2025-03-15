programa {
  funcao inicio() {
    
    real a, b, c

    escreva("Digite um número: ")
    leia(a)

    escreva("Digite um número: ")
    leia(b)

    c = a
    a = b
    b = c

    escreva(a,b,c)
  }
}
