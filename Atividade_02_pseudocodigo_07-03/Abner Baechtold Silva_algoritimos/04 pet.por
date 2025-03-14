programa {
  funcao inicio() {
    inteiro idade
    real peso
    cadeia tipo

    escreva("Digite a idade do pet: ")
    leia(idade)
    escreva("Digite o peso do seu pet: ")
    leia(peso)
    escreva("Digite o tipo do seu pet(C para cahorro e G para gato): ")
    leia(tipo)
    
    se (tipo == "G" ou tipo == "C") {
    escolha(tipo) {
        caso "C":
        tipo = "Cachorro"
        pare

        caso "G":
        tipo = "Gato"
        pare
      }

      limpa()

      escreva("\nInformação do Pet:\nA idade do seu pet é: ",idade,"\nO peso do seu pet é: ",peso,"\nO tipo do seu pet é: ",tipo)
    }

    senao
    {
      escreva("Você informou o tipo errado. Tente novamente.")
    }
  }
}