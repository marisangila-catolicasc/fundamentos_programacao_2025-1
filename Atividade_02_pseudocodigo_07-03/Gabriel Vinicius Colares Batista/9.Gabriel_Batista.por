programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    real compra
    real calcCompra
    escreva("Digite o valor da sua compra: \n")
    leia(compra)

    calcCompra = ((20 / 100) * compra) + ((30 /100) * compra)


    escreva("O valor final da sua compra somando valor representante + impostos é: \n", calcCompra + compra)
    

  }
}
