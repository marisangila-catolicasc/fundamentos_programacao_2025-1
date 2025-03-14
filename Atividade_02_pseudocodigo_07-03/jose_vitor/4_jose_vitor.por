programa {
  funcao inicio() {
    inteiro idade_pet
    real peso
    cadeia tipo_pet

    escreva("Qual a idade de seu pet?\n")
    leia(idade_pet)
    escreva("Qual o peso de seu pet?\n")
    leia(peso)
    escreva("Qual o tipo de animal, um c (cachorro) ou um g (gato)?\n")
    leia(tipo_pet)

    se(tipo_pet == 'c'){
       escreva("É um cachorro de ", peso, "kg e ", idade_pet, " aninhos!" )
    }
    se(tipo_pet == 'g'){
      escreva("É um gato de ", peso, "kg e ", idade_pet, " aninhos!")
    }

  }
}
