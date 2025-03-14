programa {
  funcao inicio() {
    inteiro idade
    real peso
    cadeia tipo

    escreva("Insira a idade do seu pet: \n")
    leia(idade)

    escreva("Agora, insira o peso do seu pet: \n")
    leia(peso)

    escreva("Por fim, digite c se seu pet for um cachorro e g for um gato!\n")
    leia(tipo)
     se (tipo == "c" ou tipo == "C"){
      tipo = "cachorro"
    }
    senao se(tipo == "g" ou tipo =="G"){
      tipo = "gato"
    }
    senao {
      escreva("Tipo inválido! Por favor, digite c para cachorro ou g para gato! \n")
      leia(tipo)
    }

    escreva("Seu pet tem ", idade, " anos, pesa ", peso, "kg e é um ", tipo, "!")
  }
}
