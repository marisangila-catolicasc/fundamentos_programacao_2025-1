programa {
  funcao inicio() {

    real altura_lata
    real raio_lata
    real volume_lata

  escreva("Informe a altura da lata: ")
  leia(altura_lata)

  escreva("Informe o raio da lata: ")
  leia(raio_lata)

  volume_lata = 3.14 * (raio_lata * raio_lata) * altura_lata

  escreva("O volume da sua lata é de: ", volume_lata,"!")
  }
}
