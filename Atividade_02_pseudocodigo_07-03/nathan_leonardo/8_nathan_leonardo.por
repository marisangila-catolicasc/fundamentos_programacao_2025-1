programa {
  funcao inicio() {
    real volume, raio, altura, pi
    pi = 3.14

    escreva("Digite o raio da lata: ")
    leia(raio)

    escreva("Digite a altura da lata: ")
    leia(altura)

    volume = pi * (raio*raio) * altura

    escreva("O volume dessa lata: ", volume)
  }
}
