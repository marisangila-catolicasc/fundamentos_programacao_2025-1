programa {
  funcao inicio() {
    real raio_lata, altura_lata, volume_lata

    escreva("Qual o raio da lata?:\n")
    leia(raio_lata)
    escreva("Qual a altura da lata?:\n")
    leia(altura_lata)
    volume_lata = 3.14 * (raio_lata * raio_lata) * altura_lata
    escreva("O volume da sua lata é ", volume_lata ," cm³")
  }
}
