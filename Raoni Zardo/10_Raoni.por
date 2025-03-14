Cálculo do valor final de um investimento
algoritmo "Investimento"
var
    valor_inicial, valor_final: real
inicio
    escreva("Digite o valor investido: ")
    leia(valor_inicial)
    valor_final <- valor_inicial + (valor_inicial * 0.05 * 3)
    escreva("Após 3 anos, o valor final será: ", valor_final)
fimalgoritmo