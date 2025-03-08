programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro num1, num2, resultado, resto

    escreva("Digite seu primeiro número: \n")
    leia(num1)

    escreva("Digite seu segundo número: \n")
    leia(num2)

    escreva("A soma dos dois números é: ", num1 + num2, "\n")
    escreva("Subtração do primeiro pelo segundo: ", num1 - num2, "\n")
    escreva("Multiplicação dos números é: ", num1 * num2, "\n")
    escreva("Divisão do primeiro número pelo segundo é: ", num1 / num2, "\n")

    //Primeiro número elevado ao segundo
    resultado = mat.potencia(num1, num2)
    escreva("O primeiro número elevado ao segundo número é: ", resultado, "\n")

    // Cálculo do resto da divisão
    resto = num1 % num2
    escreva("O resto da divisão do primeiro número pelo segundo é: ", resto, "\n")
  }  
}
