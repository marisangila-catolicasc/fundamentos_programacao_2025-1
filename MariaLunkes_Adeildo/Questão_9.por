programa {
  funcao inicio() {
    
    real valor_compra
    real valor_representante
    real valor_impostos
    real valor_venda

    valor_representante = 20
    valor_impostos = 30

    escreva("Qual o valor da sua compra?")
    leia(valor_compra)

    valor_venda = (20 * valor_compra) / 100 + (30 * valor_compra) / 100 + valor_compra

    escreva("O valor da sua venda é ", valor_venda)


  }
}
