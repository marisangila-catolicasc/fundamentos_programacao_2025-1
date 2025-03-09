programa {
  funcao inicio() {
    inteiro idade
    real peso
    caracter tipo

    escreva("Digite a idade do seu pet:\n")
    leia (idade)
    escreva("Digite o peso do seu pet:\n")
    leia (peso)
    escreva ("Escreva o tipo do seu PET, caso seja cachorro, digite C, caso seja gato, digite G\n")
    leia (tipo)
  

    se (tipo == "c"){
      escreva("Seu pet é um cachorro e tem ", idade, " ano(s) e pesa ", peso, "Kg!")
    }senao se(tipo == "g"){
      escreva("Seu pet é um gato e tem ", idade, " ano(s) e pesa ", peso, "Kg!")
    }
  }
}