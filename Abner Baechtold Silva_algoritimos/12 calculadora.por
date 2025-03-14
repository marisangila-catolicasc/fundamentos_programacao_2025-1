programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
  real numeroA, numeroB, soma, subtracao, multiplicacao, divisao, potencia, resto, i
   
  escreva("Digite o primeiro número inteiro: ")
  leia(numeroA)
  escreva("Digite o segundo número inteiro: ")
  leia(numeroB)

    soma = numeroA + numeroB
    subtracao = numeroA - numeroB
    multiplicacao = numeroA * numeroB
    divisao = numeroA / numeroB
    potencia = mat.potencia(numeroA, numeroB)
    resto = numeroA - (numeroB * divisao)

  escreva("\nSoma: ", soma)
  escreva("\nSubtração: ", subtracao)
  escreva("\nMultiplicação: ", multiplicacao)
  escreva("\nDivisão: ", divisao)
  escreva("\nPotência: ", potencia)
  escreva("\nResto da divisão: ", resto)
  }
}
