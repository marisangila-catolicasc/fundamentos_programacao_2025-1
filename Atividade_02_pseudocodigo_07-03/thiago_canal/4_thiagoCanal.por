programa {
  funcao inicio() {
    inteiro idade
    inteiro peso
    cadeia tipo

    escreva("Quantos anos tem seu pet? ")
    leia(idade)
    escreva("Qual o peso do pet? Kg:")
    leia(peso)
    escreva("Seu pet é gato ou cachorro (c ou g)? ")
    leia(tipo)

    se (tipo == "c"){
      tipo = "cachorro"
      limpa()
      escreva("Seu pet tem ", idade, " anos")
      escreva("\n")
      escreva("Seu pet tem ", peso, "Kg")
      escreva("\n")
      escreva("Seu pet é um ", tipo)
    } senao se (tipo == "g"){
      tipo = "gato"
      limpa()
      escreva("Seu pet tem ", idade, " anos")
      escreva("\n")
      escreva("Seu pet tem ", peso, "Kg")
      escreva("\n")
      escreva("Seu pet é um ", tipo)
    } senao{
      escreva("Tipo inválido.")
    }

  }
}
