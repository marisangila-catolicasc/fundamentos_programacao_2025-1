programa {
  funcao inicio() {
    real valor_venda, valor_compra, representante, imposto


  escreva("Informe o valor da compra\n")
  leia(valor_compra)



    representante = valor_compra * 0.2
    imposto = valor_compra * 0.3
    valor_venda = representante + imposto + valor_compra

    escreva("O valor total é de", valor_venda)
    
  }
}
