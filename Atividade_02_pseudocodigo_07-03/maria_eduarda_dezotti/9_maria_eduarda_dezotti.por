programa {
  funcao inicio() {
    real valor, valor20, valor30, valor_total

    escreva("Insira o valor da sua compra: \n")
    leia(valor)

    valor20 = valor * 0.2
    valor30 = valor * 0.3
    valor_total = valor + valor20 + valor30

    escreva("O valor total da sua compra foi de: \n R$ ", valor_total, "!")
  }
}