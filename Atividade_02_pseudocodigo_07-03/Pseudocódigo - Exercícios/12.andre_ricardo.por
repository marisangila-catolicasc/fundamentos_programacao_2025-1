programa {
  funcao inicio() {
    inteiro numero1, numero2
    inteiro resultado
      escreva("Digite o primeiro número: ")
      leia(numero1)
      escreva("Digite o segundo número: ")
      leia(numero2)
      resultado = numero1 + numero2
      escreva("A soma dos dois numeros é: ",resultado, "\n")
      resultado = numero1 - numero2
      escreva("A subtração do primeiro pelo segundo número é: ",resultado , "\n")
      resultado = numero1 * numero2
      escreva("A multiplicação dos dois numeros é: ",resultado , "\n")
      resultado = numero1 / numero2
      escreva("A divisão dos dois numeros é: ",resultado , "\n")
      resultado = numero1 ^ numero2
      escreva("A eleveção do primeiro número ao segundo número é: ",resultado , "\n")
      resultado = numero1 % numero2
      escreva("O resto da divisão do primeiro número pelo segundo é: ",resultado , "\n")

  }
}
