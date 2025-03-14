programa {
  funcao inicio() {

    real valor, valor_total

    escreva("Informe o valor de compra: \n")
    leia(valor)

    valor_total = valor + (valor*0.2) + (valor*0.3)

    escreva("O valor total dessa compra é de: R$", valor_total)
    
  }
}
