programa {
    funcao inicio() {
        
        inteiro num1, num2, soma, subtracao, multiplicacao, resto
        real divisao, potencia

        escreva("Digite o primeiro número: ")
        leia(num1)

        escreva("Digite o segundo número: ")
        leia(num2)

        soma = num1 + num2
        subtracao = num1 - num2
        multiplicacao = num1 * num2
        divisao = num1 / num2
        resto = num1 % num2
        potencia = num1 ^ num2

        escreva("Soma: ", soma, "\n")
        escreva("Subtração: ", subtracao, "\n")
        escreva("Multiplicação: ", multiplicacao, "\n")
        escreva("Divisão: ", divisao, "\n")
        escreva("Resto da divisão: ", resto, "\n")
        escreva("Potência: ", potencia, "\n")
    }
}
