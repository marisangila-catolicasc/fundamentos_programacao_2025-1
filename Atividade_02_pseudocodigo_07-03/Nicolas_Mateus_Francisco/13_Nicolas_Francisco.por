// Exercício 13


programa {
  funcao inicio() {
    cadeia a
    cadeia b
    cadeia c

    escreva("Digite um valor numerico ou nao para a variavel A: \n")
    leia(a)
    escreva("Digite um valor numerico ou nao para a variavel B: \n")
    leia(b)

    c = a

    a = b
    b = c

    escreva("O valor da variavel A agora é: " + a)
    escreva("O valor da variavel A agora é: " + b)
  }
}
