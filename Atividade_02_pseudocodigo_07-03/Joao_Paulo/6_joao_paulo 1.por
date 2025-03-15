programa {
  funcao inicio() {
    inteiro numero
    inteiro antecessor
    inteiro sucessor

    escreva("Digite um número:\n")
    leia(numero)

    antecessor = numero - 1
    sucessor = numero + 1
    
    escreva("O número informado foi ", numero , " o antecessor é ", antecessor, " e o sucessor é ", sucessor)

  }
}
