programa { inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro n1, n2, soma, sub, mult, div, pot, resto

    escreva("Digite um numero: ")
    leia(n1)

    escreva("Digite outro numero: ")
    leia(n2)

    soma = n1 + n2
    sub = n1 - n2
    mult = n1 * n2
    div = n1 / n2
    pot = mat.potencia(n1,n2)
    resto = n1 % n2

    escreva("Soma: ", soma)
    escreva(" Subtração: ", sub)
    escreva(" Multiplicação: ", mult)
    escreva(" Divisão: ", div)
    escreva(" Potência: ", pot)
    escreva(" Resto da divisão: ", resto)
  }
}
