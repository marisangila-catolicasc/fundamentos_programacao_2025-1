programa {
  funcao inicio() { 
    /* 
Desenvolva um algoritmo que pe¸ca ao usu´ario um
n´umero inteiro. Como sa´ıda, mostre: o n´umero, seu antecessor e seu sucessor.
Exemplo: “O n´umero informado foi 30, o antecessor ´e 29 e o sucessor ´e 31.”
    */
    inteiro numero
    escreva("Digite um número: ")
    leia(numero)
    limpa()
    escreva("O núumero informado foi ",numero,", o antecessor é ",numero-1," e o sucessor é ", numero+1, ".")
  }
}
