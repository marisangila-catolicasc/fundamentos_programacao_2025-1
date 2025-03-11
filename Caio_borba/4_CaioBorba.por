programa {
  funcao inicio() {
    inteiro idade_pet
    real peso_pet
    cadeia tipo_pet
    escreva("Insira a idade do pet\n")
    leia(idade_pet)
    escreva("Insira o peso do pet\n")
    leia(peso_pet)
    escreva("Seu pet é um cachorro(c) ou um gato(g)?\n")
    leia(tipo_pet)
      
    escreva("Seu pet tem: ", idade_pet) escreva(" anos")
    escreva("\n")
    escreva("Seu pet tem: ", peso_pet) escreva(" kg")
    escreva("\n")
    se(tipo_pet == "c") 
    { escreva("Seu pet é um cachorro")} 
    senao{ escreva("Seu pet é um: gato")}
  }
}
