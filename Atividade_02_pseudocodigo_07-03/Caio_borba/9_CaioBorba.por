programa {
  funcao inicio() {
    real valor_compra, valor_total
    inteiro valor_representante, valor_imposto
    escreva("Insira o valor da compra\n")
    leia(valor_compra)

    valor_total = valor_compra + (0.2 * valor_compra + 0.3 * valor_compra)

    escreva("O valor total é: ", valor_total) escreva(" reais")
  }
}
