programa {
    funcao inicio() {
        real valor_inicial, valor_final, taxa_juros
        inteiro anos

        taxa_juros = 0.05
        anos = 3

        escreva("digite o valor investido por Maria: ")
        leia(valor_inicial)

        valor_final = valor_inicial + (valor_inicial * taxa_juros * anos)

        escreva("o valor final do investimento após ", anos, " anos será: ", valor_final)
    }
}