programa {
  funcao inicio() {
    
    real ValorCompra, ValorRepresentante, ValorImpostos, ValorVenda

    escreva("Digite o valor de compra da mercadoria: ")
    leia(ValorCompra)

    ValorRepresentante = ValorCompra * 0.20
    ValorImpostos = ValorCompra * 0.30

    ValorVenda = ValorCompra + ValorRepresentante + ValorImpostos

    escreva("O valor de venda de mercadoria é de: ", ValorVenda)
  }
}
