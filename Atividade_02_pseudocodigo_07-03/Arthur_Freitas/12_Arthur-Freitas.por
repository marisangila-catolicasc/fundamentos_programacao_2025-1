programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro n1, n2

    escreva("Digite o primeiro número:\n")
    leia(n1)

    escreva("Digite o segundo número:\n")
    leia(n2)

    escreva("Soma: ", n1 + n2, "\n")
    escreva("Subtração: ", n1 - n2, "\n")
    escreva("Multiplicação: ", n1 * n2, "\n")
    escreva("Divisão: ", n1 / n2, "\n")
    escreva("Potenciação: ", mat.potencia(n1, n2), "\n")
    escreva("Resto da divisão: ", n1 % n2)

  }
}
