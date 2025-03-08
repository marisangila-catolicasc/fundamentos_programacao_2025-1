// Exercicio 5

programa {
  funcao inicio() {
    inteiro peso_pet
    inteiro idade_pet
    cadeia tipo_pet 

    escreva("Qual é o peso do seu Pet? (Em kg):")

    leia(peso_pet)
    limpa()
    escreva(peso_pet,"Kg\n")

    escreva("Ótimo! Qual é a idade de seu Pet?:")
    leia(idade_pet)
    limpa()
    escreva(idade_pet," Anos\n")

    escreva("Obrigado! Agora seu Pet é?\n CACHORRO: (C) \n GATO: (G)\n Resposta:")
    leia(tipo_pet)
    escolha(tipo_pet){
      caso("C"): 
        limpa()
        escreva("Você possui um Cachorro que tem ", peso_pet,"Kg e possui ", idade_pet, " anos de Idade")
      pare  
      caso("c"): 
        limpa()
        escreva("Você possui um Cachorro que tem ", peso_pet,"Kg e possui ", idade_pet, " anos de Idade")
      pare  
      caso("G"): 
        limpa()
        escreva("Você possui um Gato que tem ", peso_pet,"Kg e possui ", idade_pet, " anos de Idade")
      pare  
      caso("g"): 
        limpa()
        escreva("Você possui um Gato que tem ", peso_pet,"Kg e possui ", idade_pet, " anos de Idade")
      pare  
      caso contrario: 
        limpa()
        escreva("Não possui está opção")
    }
  }

}
