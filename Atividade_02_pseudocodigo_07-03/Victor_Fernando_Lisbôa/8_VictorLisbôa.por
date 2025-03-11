programa {
  inclua biblioteca Matematica
  funcao inicio() {
    // volume = π × raio^2 × altura.

    real vol, alt, r, pi
    escreva("Insira a altura da lata: ")
    leia(alt)

    escreva("Insira o raio da lata: ")
    leia(r)

    pi = Matematica.arredondar(Matematica.PI,2)

    vol = pi * r*r * alt
    
    escreva("O volume da lata é de: ", vol)
  }
}
