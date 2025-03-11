programa {
  funcao inicio() {
    inteiro a, b, trocador

    escreva("Digite o valor de 'a':\n")
    leia(a)

    escreva("Digite o valor de 'b':\n")
    leia(b)

    trocador = a
    a = b
    b = trocador

    escreva("Os valores foram trocados, agora 'a' = ", a, " e 'b' = ", b, ".")

  }
}
