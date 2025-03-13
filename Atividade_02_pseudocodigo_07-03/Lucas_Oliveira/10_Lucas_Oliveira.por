programa {
  const real anos = 3, taxa_ano = 0.05
  funcao inicio() {
    real valor_inicial, valor_final
    escreva("Bem Vindo(a) ao Banco.\nQuanto deseja investir hoje?\n")
    leia(valor_inicial)
    valor_final = valor_inicial + (valor_inicial * anos * taxa_ano)
    escreva("Após 3 anos, você terá R$", valor_final)
    escreva("\nR$", valor_final - valor_inicial, " de lucro.")
  }
}
