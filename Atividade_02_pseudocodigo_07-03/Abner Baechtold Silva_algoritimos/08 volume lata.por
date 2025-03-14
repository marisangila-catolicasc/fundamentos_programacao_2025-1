programa {
  funcao inicio() {
  real raio, altura, volume, pi

    pi = 3.14159

  escreva("Digite o raio da lata (em cm): ")
  leia(raio)
  escreva("Digite a altura da lata (em cm): ")
  leia(altura)

    volume = pi * (raio * raio) * altura

  escreva("\nO volume da lata é: ", volume, " cm³.")
  }
}
