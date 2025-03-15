programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    real raio, altura,volume,pi 
    pi = 3.14
    escreva("Qual o raio da lata? ")
    leia(raio)
    escreva("Qual a altura da lata?")
    leia(altura)
    volume = pi*(mat.potencia(raio, 2.0))*altura
    escreva("O volume da lata é: ",volume)
  }
}
