programa {
  funcao inicio() {

    inteiro idade_pet
    real peso_pet
    cadeia tipo_pet

    escreva("Qual a idade do pet?\n")
    leia(idade_pet)
    escreva("Qual o peso do pet?\n")
    leia(peso_pet)
    escreva("Qual o tipo do pet? Digite 'c' se for cachorro, e digite 'g' se for gato!\n")
    leia(tipo_pet)

    se(tipo_pet == 'c'){
      escreva("Você tem um cachorro!\n")
      escreva("Seu cão tem ", idade_pet, " anos!\n")
      escreva("Seu cão tem ", peso_pet, "kg!")
    }
    se(tipo_pet == 'g'){
      escreva("Você tem um gato!\n")
      escreva("Seu gato tem ", idade_pet, " anos!\n")
      escreva("Seu gato tem ", peso_pet, "kg!\n")
    }
    senao{
      escreva("Animal identificado!")
    }
  }
}
