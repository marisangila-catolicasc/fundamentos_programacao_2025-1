programa {
  funcao inicio() {
    real pi
    real volume
    real raio
    real altura

    pi = 3.14159265359

    escreva("Digite a altura da lata:\n")
    leia(altura)
    escreva("Digite o raio da lata:\n")
    leia(raio)

    volume = pi * (raio * raio) * altura

    escreva("O volume de sua lata é igual a ", volume) 


  }
}
