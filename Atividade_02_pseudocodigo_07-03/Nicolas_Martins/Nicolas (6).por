programa {
  inclua biblioteca Matematica
  funcao inicio() {


   
    real a,b
    escreva("Digite um número\n")
    leia (a)

    escreva("Digite outro número\n")
    leia (b)

    escreva("\nResultado da soma = ", a+b)
    escreva("\nResultado de subtração = ", a-b)
    escreva("\nResultado de multiplicação = ", a*b)
    escreva("\nResultado de divisão = ", a/b)
    escreva("\nResultado de potência = ", Matematica.potencia(a,b))
    escreva("\nResto da divisão = ", a % b)

  }
}
