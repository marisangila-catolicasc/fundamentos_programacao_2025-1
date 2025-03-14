programa {

  inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro a , b

    escreva("informe dois números: ")
    leia(a)
    leia(b)

    escreva("a soma deles é: ", a + b,"\n")
    escreva("a subtração de primeiro pelo segundo é: ", a - b, "\n")
    escreva("o produto deles é: " , a * b, "\n")
    escreva("a divisão do primeiro pelo segundo é: ", a / b, "\n")
    escreva("o valor do primeiro elevado pelo segundo é: ", mat.potencia (a, b), "\n")
    escreva("o resto da divisão do primeiro pelo segundo é: ", a % b, "\n" )

  }
}
