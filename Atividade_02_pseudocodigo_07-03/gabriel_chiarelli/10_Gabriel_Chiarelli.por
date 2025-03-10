programa {
/*
Desenvolva um pseudoc´odigo para calcular o valor final de um investimento de
Maria em um banco. O pseudoc´odigo deve receber o valor investido e mostrar
quanto dinheiro ela ter´a ap´os 3 anos de investimento. Considere que o banco oferece
uma taxa de juros simples de 5% ao ano, e que a taxa n˜ao muda. valor f inal =
valor inicial + (valor inicial × taxa juros × anos)
*/
  funcao inicio() {
    const real JUROS = 0.05
    inteiro anosInvest = 3
    real valInvest, valFinal

    escreva("Qual o valor que desejá aplicar? ")
    leia(valInvest)
    valFinal = valInvest + (valInvest * JUROS * anosInvest)

    escreva("Valor final é de R$", valFinal)
  }
}
