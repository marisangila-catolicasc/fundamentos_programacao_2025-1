programa {
      inclua biblioteca Matematica 
  funcao inicio() {

    real num1, num2, soma, subtracao,  divisao,  multiplicacao, potencia

    inteiro resto

    escreva("Digite um número\n")

    leia(num1)

    escreva("Digite outro número\n")

    leia(num2)

    soma = num1 + num2

    subtracao = num1 - num2

    multiplicacao = num1 * num2

    divisao = num1 / num2

    resto = num1 % num2

    potencia = Matematica.potencia(num1, num2)

    

    escreva(" O resultado da soma é ", soma)

    escreva("\n O resultado da subtração é ", subtracao)

    escreva("\n O resultado da multiplicação é ", multiplicacao)

    escreva("\n O resultado da divisão é ", divisao)

    escreva("\n O resultado da potencia é ", potencia)

    escreva("\n O resultado do resto da divisão é ", resto)
  }
}
