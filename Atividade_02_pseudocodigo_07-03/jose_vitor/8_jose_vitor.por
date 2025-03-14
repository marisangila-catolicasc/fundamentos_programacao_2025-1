programa {
  const real PI = 3.14
  funcao inicio() {
    real raio
    real h //altura
    real volume

    escreva("Digite o raio da lata:\n")
    leia(raio)
    escreva("Digite a altura da lata:\n")
    leia(h)

    volume = PI * (raio * raio) * h
    escreva("O volume da lata é: ", volume)
  }
}
