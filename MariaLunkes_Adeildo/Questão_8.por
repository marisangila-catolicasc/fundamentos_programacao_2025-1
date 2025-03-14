programa {
  funcao inicio() {
    
    real valor_volume
    real valor_raio
    real valor_pi
    real valor_altura

    valor_pi = 3.14

    escreva("Vamos calcular o volume de uma lata! \n")
    escreva("Qual é o valor do raio?  \n")
    leia(valor_raio)

    escreva("Qual é o valor da altura?  \n")
    leia(valor_altura)

    valor_volume = valor_pi * (valor_raio * valor_raio) * valor_altura

    escreva("O volume da lata é ", valor_volume, "!")

  }
}
