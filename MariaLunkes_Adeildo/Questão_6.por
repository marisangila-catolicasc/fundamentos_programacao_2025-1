programa {
  funcao inicio() {
    
    inteiro numero
    inteiro antecessor
    inteiro sucessor

    escreva("Digite um numero: ")
    leia (numero)
    escreva("Seu numero é: ", numero, "\n")

    antecessor = numero - 1
    sucessor = numero + 1

    escreva("O antecessor do seu numro é: ", antecessor, "\n")
    escreva("O sucessor do seu numero é: ", sucessor, "\n")
  }
}
