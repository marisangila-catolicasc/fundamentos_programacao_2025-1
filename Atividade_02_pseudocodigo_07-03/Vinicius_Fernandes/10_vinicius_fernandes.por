programa {
  funcao inicio() {
    real valor_investido
    real valor_final

    escreva("Qual será o valor investido ?\n")
    leia(valor_investido)

    valor_final = valor_investido + (valor_investido * 0.5 * 3)

    escreva("Você terá R$ ",valor_final ," em 3 anos.")
  }
}
