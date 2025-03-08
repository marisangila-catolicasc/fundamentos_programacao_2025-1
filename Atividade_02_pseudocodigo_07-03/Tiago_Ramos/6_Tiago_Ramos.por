// Exercício 6

programa {
  funcao inicio() {
    inteiro numero
    inteiro sucessor_numero
    inteiro antecessor_numero
    
    escreva("Digite um número e mostrarei seu sucessor e seu antecessor: ")
    leia(numero)
    antecessor_numero = numero - 1 
    sucessor_numero = numero + 1 
    
    escreva("\“O número informado foi ",numero," o antecessor é ", antecessor_numero, " e o sucessor é ", sucessor_numero)
  }
}
