programa {
 const real PI = 3.14
  funcao inicio() {
    real raio_lata, altura_lata, volume_lata
    escreva("Insira o raio da lata\n")
    leia(raio_lata)
    escreva("Insira a altura da lata\n")
    leia(altura_lata)
    
    volume_lata = PI * (raio_lata * raio_lata) * altura_lata

    escreva("O volume da lata é: ", volume_lata)
  }
}
