programa {
  funcao inicio() {
    inteiro valor1, valor2, temp

    escreva("Digite o valor da letra A: \n")
    leia(valor1)
    escreva("Digite o valor da letra B: \n")
    leia(valor2)

    temp = valor1 
    valor1 = valor2
    valor2 = temp

    escreva("\n","Primeiro valor da letra A é: " , valor1 )
    escreva("\n","Primeiro valor da letra B é: ", valor2)
  }
}
