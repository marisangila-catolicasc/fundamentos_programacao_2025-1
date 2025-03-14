programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro a, b, soma, mult
    real sub, div, resto

    escreva("Escolha um número inteiro.\n")
    leia(a)
    escreva("\nEscolha outro número inteiro.\n")
    leia(b)

    soma = a + b
    mult = a * b
    div = a / b
    resto = a % b

    escreva("\nCom estes dois números, podemos realizar operações matemáticas. Logo, temos os seguintes resultados:\nSoma: ", soma, "\nMultiplicação: ", mult, "\nDivisão: ", div, "\nPotência: ", mat.potencia(a,b), "\nSobra da divisão, caso tenha: ", resto)
  }
}
