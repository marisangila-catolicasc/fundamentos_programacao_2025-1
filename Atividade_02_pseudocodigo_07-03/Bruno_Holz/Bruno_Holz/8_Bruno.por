programa {
  const real PI = 3.14159
  funcao inicio() 
  {
    real raio, altura, volume
    escreva("Digite a altura da garrafa (em cm): ")
    leia(altura)
    escreva("Digite o raio da garrafa (em cm): ")
    leia(raio)
    volume = PI*raio*raio*altura
    escreva("O volume da garrafa é: ", volume, "cm³")
  }
}
