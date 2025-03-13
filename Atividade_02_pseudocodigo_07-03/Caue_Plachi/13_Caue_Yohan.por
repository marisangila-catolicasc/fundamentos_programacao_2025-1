programa {
  funcao inicio() {
    real num1, num2, num3
    escreva("Escreva um número:\n")
    leia(num1)
    escreva("Escreva um número:\n")
    leia(num2)
    num3 = num1
    num1 = num2
    num2 = num3
    escreva("O primeiro número se tornou ", num1, " e o segundo  número se tornou ", num2)  
  }
}
