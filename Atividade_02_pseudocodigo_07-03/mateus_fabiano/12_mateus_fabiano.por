programa {
  inclua biblioteca Matematica  --> mat
  funcao inicio() {
    inteiro valor_a
    inteiro valor_b
    inteiro soma
    inteiro subtracao
    inteiro multiplicacao
    real divisao
    inteiro potenciacao
    inteiro resto

    escreva("Insira o primeiro valor:\n")
    leia(valor_a)
    escreva("Insira o segundo valor:\n")
    leia(valor_b)

    soma = valor_a + valor_b

    escreva("A soma do primeiro valor pelo segundo é: " , soma, "\n")

    subtracao = valor_a - valor_b

    escreva("A subtração do primeiro valor pelo segundo é: ", subtracao, "\n")
    
    multiplicacao = valor_a * valor_b

    escreva("A multiplicação do primeiro valor pelo segundo é: ", multiplicacao, "\n")

    divisao = valor_a / valor_b

    escreva("A divisão do primeiro valor pelo segundo é: ", divisao, "\n")

    potenciacao = mat.potencia(valor_a, valor_b)

    escreva("O resultado do primeiro valor elevado ao segundo é: ", potenciacao , "\n")

    resto = valor_a % valor_b

    escreva("O resto da divisão do primeiro valor pelo segundo é: ", resto, "\n")


  }
}
