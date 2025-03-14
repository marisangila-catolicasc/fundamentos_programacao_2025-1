programa {  
  funcao inicio() {
    real raio, altura, raio_quadrado, volume

    escreva("Insira o raio, em cm, da lata: \n")
    leia(raio)

    escreva("Agora, a altura, também em cm, da lata: \n")
    leia(altura)

    raio_quadrado = raio * raio
    volume = 3.14 * raio_quadrado * altura

    escreva ("O volume da sua lata é: \n", volume,"cm³")
  }
}
