programa {
  funcao inicio() {
    inteiro numero, antecessor, sucessor

    escreva("Escolha um número inteiro.\n")
    leia(numero)
    
    antecessor = numero - 1
    sucessor = numero + 1

    escreva("\nO número escolhido foi o ", numero, ", que possui como antecessor e sucessor os números ", antecessor, " e ", sucessor, ", respectivamente.")
  }
}
