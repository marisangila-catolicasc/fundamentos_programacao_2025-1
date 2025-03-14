programa {
    funcao inicio() {
        
        real valorCompra, valorRepresentante, valorImpostos, valorVenda

        
        escreva("Digite o valor de compra da mercadoria: ")
        leia(valorCompra)

        
        valorRepresentante = valorCompra * 0.20 
        valorImpostos = valorCompra * 0.30      

        
        valorVenda = valorCompra + valorRepresentante + valorImpostos

        
        escreva("O valor de venda da mercadoria é: ", valorVenda)
    }
}
