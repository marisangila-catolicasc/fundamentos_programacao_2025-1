programa {

  inclua biblioteca Matematica-->mat

  funcao inicio() {

    inteiro numero1
    inteiro numero2

    escreva("Informe um numero: ")
    leia(numero1)

    escreva("Informe outro numero: ")
    leia(numero2)

    escreva("A soma desses numeros são: ", numero1 + numero2, "\n")

    escreva("A subtração do primeiro numero pelo segundo numero é de: ", numero1 - numero2, "\n")

    escreva("A multiplicação dos dois numeros resultam em: ", numero1 * numero2, "\n") 
    
    escreva("A divisao do primeiro numero pelo segundo numero é de: ", numero1 / numero2, "\n")

    escreva("O primeiro numero elevado ao segundo numero resulta em: ", mat.potencia(numero1, numero2), "\n")

    escreva("O resto da divisao é: ", numero1 % numero2)
  }
}
