programa {
  inclua biblioteca Matematica-->mat
  funcao inicio() {
    inteiro num1, num2
    escreva("Digite o primeiro número:\n")
    leia(num1)
    escreva("Digite o segundo número:\n")
    leia(num2)
    escreva ("Soma:", num1+ num2, "\n")
    escreva ("Subtração:", num1 - num2, "\n")
    escreva ("Multiplicação:", num1 * num2, "\n")
    escreva ("Divisão:", num1 / num2, "\n")
    escreva ("Potenciação:", mat.potencia(num1, num2), "\n")
    escreva ("Resto da divisão:", num1%num2, "\n")
}
}