// Exercicio 10

programa {
  funcao inicio() {
    real valor_investido
    real valor_final

    escreva("Digite o valor do investimento inicial: \n")
    leia(valor_investido)
    valor_final = valor_investido + (valor_investido * 0.05 * 3)
    escreva("O valor final após 3 anos de investimento é de ", valor_final)
  }
}
