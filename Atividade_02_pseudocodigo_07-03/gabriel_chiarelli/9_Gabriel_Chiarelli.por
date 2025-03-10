programa {
/*
Desenvolva um pseudoc´odigo que calcule o valor de venda de uma mercadoria. O
usu´ario dever´a informar seu valor de compra. O valor de venda ´e dado por: valor
de compra + 20% (representante) + 30% (impostos). Mostre o valor total de venda
dessa mercadoria. Os valores de 20% e 30% s˜ao calculados com base no valor de
compra.
*/
  funcao inicio() {
    real valCompra, valFinal
    const real VALREP = 0.2, VALIMPOSTO = 0.3

    escreva("Insira o valor da compra: ")
    leia(valCompra)
    valFinal = ((valCompra * VALREP) + (valCompra * VALIMPOSTO) + valCompra)
    escreva("\nValor total a pagar é de: ", valFinal)
  }
}
