programa {
  funcao inicio() { 
    /* 
Desenvolva um pseudoc´odigo que pe¸ca ao usu´ario, a idade e o peso de seu pet, e
qual tipo de pet. Se for cachorro o usu´ario deve digitar c, se for gato, digita g.
Mostre as entradas na tela.
    */
    inteiro idade
    real peso
    caracter tipo
    escreva("Qual a idade do pet? ")
    leia(idade)
    escreva("Qual o peso do seu pet? ")
    leia(peso)
    escreva("Qual o tipo do seu pet? Digite: \nC - Para cachorro\nG - Gato\n")
    leia(tipo)
    escreva("\n\n\n\n\n\n\n\n\n\n\n\n") // apenas para limpar a tela
    se(tipo == "C" ou tipo == "c"){
      escreva("Idade: ", idade, "\nPeso: ", peso, "\nTipo: Cachorro")
    }senao se(tipo == "G" ou tipo == "g"){
      escreva("Idade: ", idade, "\nPeso: ", peso, "\nTipo: Gato")
    }
  }
}
