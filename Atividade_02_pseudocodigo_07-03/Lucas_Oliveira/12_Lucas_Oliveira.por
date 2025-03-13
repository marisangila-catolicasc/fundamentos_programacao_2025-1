programa {
  inclua biblioteca Matematica
  funcao inicio() {
    real num1, num2
    escreva("Digite um número: ")
    leia(num1)
    escreva("Digite outro número: ")
    leia(num2)
    escreva("\nResultado da soma = ", num1+num2)
    escreva("\nResultado da subtração = ", num1-num2 )
    escreva("\nResultado da multiplicação = ", num1*num2)
    escreva("\nResultado da divisão = ", num1/num2)
    escreva("\nResultado da potência = ", Matematica.potencia(num1, num2))
    escreva("\nResto da divisão = ", num1 % num2)
  }
}
