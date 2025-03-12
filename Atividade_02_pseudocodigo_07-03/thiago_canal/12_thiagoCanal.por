programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro number1, number2

    escreva("Digite o primeiro número: ")
    leia(number1)
    escreva("Digite o segundo número: ")
    leia(number2)

    escreva("A soma deles é ", number1 + number2, "\n")
    escreva("O ", number1, " menos o ", number2, " é ", number1 - number2, "\n")
    escreva("O ", number1, " vezes o ", number2, " é ", number1 * number2, "\n")
    escreva("O ", number1, " dividido pelo ", number2, " é ", number1 / number2, "\n")
    escreva("O ", number1, " elevado a ", number2, " é ", mat.potencia(number1, number2), "\n")
    escreva("O resto da divisão de ", number1, " pelo ", number2, " é ", number1 % number2, "\n")
  }
}
