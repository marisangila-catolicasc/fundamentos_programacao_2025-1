programa {
    const real pi = 3.14
  funcao inicio() {
   real volume_lata, raio_lata, altura_lata
    escreva("Qual é o raio da lata?: ")
    leia(raio_lata)
    escreva("Qual é a altura da lata?: ")
    leia(altura_lata)
    volume_lata = pi * (raio_lata*raio_lata)* altura_lata
    escreva("O Volume da lata é: ",volume_lata)
  }
}
