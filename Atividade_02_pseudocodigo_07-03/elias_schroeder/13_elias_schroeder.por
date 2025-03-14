programa {
  funcao inicio() {
    
    real a,b

    escreva("Insira um valor para A\n")
    leia(a)


    escreva("Insira um valor para B\n")
    leia(b)

    real valor1, valor2


    valor1 = a
    valor2 = b

    a = valor2
    b = valor1

    escreva("Os novos valores são A ", a, " e o DE B ", b )
  }
}
