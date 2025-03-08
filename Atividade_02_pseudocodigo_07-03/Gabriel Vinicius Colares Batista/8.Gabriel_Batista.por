programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    real volume
    real altura
    real raio
    real calcRaio
    escreva("CÁLCULO DE VOLUME \n\n")
    escreva("Digite o raio: \n")
    leia(raio)
    escreva("Digite a altura: \n")
    leia(altura)

    //calc raio

    calcRaio = raio *raio
    volume = 3.14 * calcRaio * altura
    escreva("O cálculo do volume é: ", volume)

  }
}
