programa {
  funcao inicio() {
    inteiro idade_pet
    real peso_pet
    cadeia tipo_pet

    escreva("Digite a idade do seu pet:\n")
    leia(idade_pet)
    escreva("Digite o peso do seu pet:\n")
    leia(peso_pet)
    escreva("Se o seu pet for um cachorro, digite c, se for um gato, digite g: \n")
    leia(tipo_pet)
    escreva("O tipo do seu pet é: ", tipo_pet , "\n")
    escreva("Seu pet tem ", peso_pet ,"kg\n")
    escreva("Seu pet tem ", idade_pet ," anos de idade\n")
    
  }
}
