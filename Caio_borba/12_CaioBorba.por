programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro numero_1, numero_2
    real divisao, multiplicacao, soma, subtracao, potencia, resto
    escreva("Insira dois número inteiros\n")
    leia(numero_1) leia(numero_2)
    divisao = numero_1 / numero_2
    multiplicacao = numero_1 * numero_2
    soma = numero_1 + numero_2
    subtracao = numero_1 - numero_2
    potencia = mat.potencia (numero_1, numero_2)
    resto = numero_1 % numero_2
    escreva("Soma: ", soma)
    escreva("\nsubtração: ", subtracao)
    escreva("\nMultiplicação: ", multiplicacao)
    escreva("\nDivisão: ", divisao)
    escreva("\nResto divisão: ", resto)
    escreva("\nPotência: ", potencia)
  }
}
