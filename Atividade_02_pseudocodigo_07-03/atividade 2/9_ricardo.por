programa {
    funcao inicio() {
        real valor_compra, valor_venda, taxa_representante, taxa_impostos

        escreva("digite o valor de compra da mercadoria: ")
        leia(valor_compra)

        taxa_representante = valor_compra * 0.20
        taxa_impostos = valor_compra * 0.30

        valor_venda = valor_compra + taxa_representante + taxa_impostos

        escreva("valor de venda da mercadoria é: ", valor_venda)
    }
}