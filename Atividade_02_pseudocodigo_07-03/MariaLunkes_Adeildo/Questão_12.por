programa {
  funcao inicio() {
   
    inteiro numero1
    inteiro numero2
    real resultado1
    real resultado2
    real resultado3
    real resultado4
    real resultado5
    real resultado6

    escreva("Digite o primeiro numero: \n")
    leia(numero1)
    escreva("Digite o segundo numero: \n")
    leia(numero2)


    resultado1 = numero1 + numero2

    escreva("O valor dos numeros somados é ", resultado1, "\n")

    resultado2 = numero1 - numero2

    escreva("O valor dos numeros subtraidos é ", resultado2, "\n")

    resultado3 = numero1 * numero2

    escreva("O valor dos numeros multiplicados é ", resultado3, "\n")

    resultado4 = numero1 / numero2

    escreva("O valor ds numero divididos é ", resultado4, "\n")

    resultado5 = mat.potencial(numero1,numero2)

    escreva("O ", numero1, "elevado a ", numero2, "é igual a ", resultado5)

    resultado6 = numero1 % numero2

    escreva("O resto da divisão entre o numero ", numero1, " e o numero ", numero2, " é igual a ", resultado6)

  }
}
