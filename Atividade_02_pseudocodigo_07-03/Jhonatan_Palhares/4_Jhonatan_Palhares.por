programa {
  funcao inicio() {
    cadeia idade_pet, peso_pet, tipo_pet

    escreva("Qual a idade do seu pet?\n")
    leia(idade_pet)
    escreva("\nQual o peso do seu pet?\n")
    leia(peso_pet)
    escreva("\nQual o tipo do seu pet? Digite C para cachorro e G para gato.\n")
    leia(tipo_pet)

    // a partir daqui, não foi pensado por mim. escrevi o código mas peguei a base em outro trabalho.

    se(tipo_pet == "C") 
      escreva("\nO seu pet é um cachorro, possui ", idade_pet, " de idade e pesa ", peso_pet, ".")
    senao se(tipo_pet == "G")
      escreva("\nO seu pet é um gato, possui ", idade_pet, " de idade e pesa ", peso_pet, ".")
  }
}
