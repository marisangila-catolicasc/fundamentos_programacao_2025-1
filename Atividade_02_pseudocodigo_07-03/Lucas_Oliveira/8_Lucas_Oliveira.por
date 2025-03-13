programa {
  funcao inicio() {
    const real pi = 3.1415
    real altura, raio, volume
    escreva("Qual a altura da lata?\n")
    leia(altura)
    escreva("Qual o raio da lata?\n")
    leia(raio)
    volume = pi * (raio * raio) * altura
    escreva("\nO volume da lata é ", volume)
  }
}
