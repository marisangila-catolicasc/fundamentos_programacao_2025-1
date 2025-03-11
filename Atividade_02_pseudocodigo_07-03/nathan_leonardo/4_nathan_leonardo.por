programa {
  funcao inicio() {
    inteiro idade
    real peso
    caracter pet

    escreva("Digite a idade do seu pet: ")
    leia(idade)

    escreva("Digite o peso do seu pet: ")
    leia(peso)

    escreva("Qual tipo de pet? (c para cachorro, g para gato) " )
    leia(pet)

    se (pet == "c" ){
      escreva("Seu pet é um cachorro, e tem ",idade," ano(s) "," e pesa ",peso," Kg" )
    }

    senao se (pet == "g"){
     escreva("Seu pet é um gato, e tem ",idade, " ano(s) "," e pesa ",peso," Kg" )

    }

  }
}
