programa {
  funcao inicio() {
    real raio
    real altura
    real volume

    escreva("Qual o raio dessa lata ?\n")
    leia(raio)
    escreva("Qual a altura dessa lata ?\n")
    leia(altura)

    volume = 3.14 * (raio * raio) * altura

    escreva("O volume dessa lata é de: ",volume)
  }
}
