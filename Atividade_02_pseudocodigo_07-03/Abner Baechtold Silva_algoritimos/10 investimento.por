programa {
  funcao inicio() {
  real inicial, final, juros
  inteiro anos

    juros = 0.05
    anos = 3

  escreva("Digite o valor do investimento de Maria: ")
  leia(inicial)

    final = inicial + (inicial * juros * anos)

  escreva("\nDepois de ", anos, " anos, Maria vai ter: ", final, " reais.") 
  }
}
