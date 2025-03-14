programa {
  funcao inicio() {
    inteiro numero, sucessor, antecessor

    escreva("Insira um número inteiro: \n")
    leia(numero)

    sucessor = numero + 1
    antecessor = numero - 1

    escreva("Você digitou o número: ", numero, "\n seu antecessor é: ", antecessor, "\n seu sucessor é: ", sucessor)
  }
}