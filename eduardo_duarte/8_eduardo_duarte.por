programa {
  const real PI = 3.14159
  funcao inicio() {
    real volume, raio, altura

    escreva("informe o raio da lata\n")
    leia (raio)
    escreva ("informe a altura da lata\n")
    leia(altura)

    volume = PI * (raio * raio) * altura
    escreva("o resultado é:", volume)
    
    }
}
