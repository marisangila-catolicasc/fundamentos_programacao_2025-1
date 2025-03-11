programa {
  funcao inicio() {
    real compra, venda, comissao, imposto

    escreva("Digite o valor de compra do produto: ")
    leia(compra)

    comissao = compra * 0.20
    imposto = compra * 0.30
    venda = compra + comissao + imposto

    escreva("O valor total do produto sera R$",venda)
  }
}
