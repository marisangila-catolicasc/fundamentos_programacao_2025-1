programa {
  funcao inicio() {
    real valor_investido, valor_final
    escreva("Insira o valor a ser investido\n")
    leia(valor_investido)

    valor_final = valor_investido + (valor_investido * 0.05 * 3)

    escreva("O valor ao fnal de 3 anos é: ", valor_final) escreva(" reais")
  }
}
