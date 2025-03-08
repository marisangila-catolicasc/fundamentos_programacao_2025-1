programa {

  inclua biblioteca Matematica --> mat
  const real pi = 3.14

  funcao inicio() {

    real raio, altura, volume

    escreva("Informe o raio, em cm: \n")
    leia(raio)
    escreva("Informe a altura, em cm: \n")
    leia(altura)

    volume =  pi * (raio*raio) * altura
    volume = mat.arredondar(volume, 2)

    escreva("O volume é: ", volume, " ml!")
  }
}
