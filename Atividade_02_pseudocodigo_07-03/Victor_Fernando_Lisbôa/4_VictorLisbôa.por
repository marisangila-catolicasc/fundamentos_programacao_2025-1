programa {
  funcao inicio() {
    real idade, peso
    caracter CG

    escreva("Digite a idade do seu pet \n")
    leia(peso)
    escreva("Digite o peso do seu pet em kg \n")
    leia(idade)
    escreva("Digite C para Cachorro ou G para Gato \n")
    leia(CG)

    escolha(CG){
      caso "C":
        limpa()
        escreva("Pet: Cachorro \nIdade: ", idade, "\nPeso: ", peso, "kg")
      pare

      caso "G":
        limpa()
        escreva("Pet: Gato \nIdade: ", idade, "\nPeso: ", peso, "kg")
      pare
    }
  }
}
