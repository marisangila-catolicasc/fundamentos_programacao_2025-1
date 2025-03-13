programa {
  funcao inicio() {
    inteiro valor, anos

    escreva ("\nDigite o valor do investimento: \n")
    leia (valor)
    escreva ("\n Quantos anos pretende deixar? \n")
    leia (anos)





    escreva ("\nEm ", anos, " vai render um total de: ", (valor * 1.05) * anos )

  }
}
/*Desenvolva um pseudoc´ odigo para calcular o valor final de um investimento de
Maria em um banco. O pseudoc´odigo deve receber o valor investido e mostrar
quanto dinheiro ela ter´a ap´os 3 anos de investimento. Considere que o banco oferece
uma taxa de juros simples de 5% ao ano, e que a taxa n˜ao muda. valor final =
valor inicial + (valor inicial × taxa juros × anos)