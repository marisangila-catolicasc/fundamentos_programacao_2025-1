programa {
  funcao inicio() {
    real investimento, final, juros, anos

    juros = 0.05   
    anos = 3

    escreva("Digite o valor investido por Maria R$")
    leia(investimento)

    final = investimento * (investimento * juros * anos)

    escreva("O valor final apos 3 anos sera de R$", final)
  }
}
