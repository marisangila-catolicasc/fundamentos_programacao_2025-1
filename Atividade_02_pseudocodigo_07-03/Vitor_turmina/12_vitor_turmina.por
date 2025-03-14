programa {

  inclua biblioteca Matematica --> mat
  funcao inicio() {

    inteiro valor1, valor2

    escreva("Informe dois números:\n")
    leia(valor1)
    leia(valor2)

    escreva("A soma deles é: ", valor1 + valor2,"\n")
    escreva("A subtração de primeiro pelo segundo é ", valor1 - valor2,"\n")
    escreva("O produto deles é ", valor1 * valor2, "\n")
    escreva("A divisão do primeiro pelo segundo é ", valor1 / valor2,"\n")
    escreva("O valor do primeiro elevado pelo segundo é ", mat.potencia(valor1, valor2),"\n")
    escreva("O resto da divisão do primero pelo segundo é ", valor1 % valor2,"\n")

    
  }
}
