programa {
  funcao inicio() {
    cadeia tipo_de_pet
    inteiro idade
    real peso
    escreva("Qual tipo de pet você tem?\nc para cachorro ou g para gato\n")
    leia(tipo_de_pet)
    escreva("Qual a idade do seu pet?\n")
    leia(idade)
    escreva("Digite o peso do seu pet: \n")
    leia(peso)
    escreva("Tipo de pet: ", tipo_de_pet, "\n")
    escreva("Peso do pet: ", peso, " kg\n")
    escreva("Idade do pet: ", idade, " anos\n")
  }
}
