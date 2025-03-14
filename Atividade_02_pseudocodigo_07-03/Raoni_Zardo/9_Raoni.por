Cálculo do valor de venda de uma mercadoria
algoritmo "Valor"
var
    valor_compra, valor_venda: real
inicio
    escreva("Digite o valor de compra da mercadoria: ")
    leia(valor_compra)
    valor_venda <- valor_compra + (valor_compra * 0.20) + (valor_compra * 0.30)
    escreva("O valor de venda da mercadoria é: ", valor_venda)
fimalgoritmo
