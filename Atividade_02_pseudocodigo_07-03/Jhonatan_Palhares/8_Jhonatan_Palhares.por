programa {
  const real PI = 3.1415
  funcao inicio() {
    real volume, raio, altura

    escreva("Qual a altura da sua lata em cm?\n")
    leia(altura)
    escreva("\nQual o raio da sua lata em cm?\n")
    leia(raio)

    volume = PI * (raio * raio) * altura

    escreva("\nA sua lata possui volume igual a ", volume, " cm³.")
  }
}
