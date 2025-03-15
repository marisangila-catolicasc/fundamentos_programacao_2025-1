programa {
  funcao inicio() {
    real pi
    real volume
    real raio
    real altura

    pi = 3.141

    escreva("Digite a altura da lata:\n")
    leia(altura)
    escreva("Digite o raio da lata:\n")
    leia(raio)

    volume = pi * (raio * raio) * altura

    escreva("O volume da lata é igual a ", volume) 

  }
}
