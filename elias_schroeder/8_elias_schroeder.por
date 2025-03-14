programa {
  funcao inicio() {
    real pi, volume, raio, altura

    pi = 3.14

    escreva("Calcular Volume de uma lata\n")
    escreva("insira o raio\n")
    leia(raio)

    escreva("insira a altura\n")
    leia(altura)

    volume = pi * (raio * raio ) * altura

    escreva("O volume é de ", volume)
    
  }
}
