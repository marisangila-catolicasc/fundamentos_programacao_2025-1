programa {
  funcao inicio() {
    inteiro idade
    real peso
    caracter tipo

    escreva("Digite a idade do seu pet:\n")
    leia (idade)
    escreva("Digite o peso do seu pet:\n")
    leia (peso)
    escreva ("Escreva o tipo do seu PET, caso seja cachorro, digite C, caso seja gato, digite G \n")
    leia (tipo)
  

    se (tipo == "c" ou tipo == "C"){
      escreva("Seu pet é um cachorro tem ", idade, " anos ", "e pesa ", peso, "Kg!")
    }senao se(tipo == "g" ou tipo == "G"){
      escreva("Seu pet é um gato tem ", idade, " anos ", "e pesa ", peso, "Kg!")
    }

  }
  
}
