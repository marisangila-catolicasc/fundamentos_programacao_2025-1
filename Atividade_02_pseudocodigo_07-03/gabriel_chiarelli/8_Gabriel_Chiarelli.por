programa {
  inclua biblioteca Matematica --> mat
  const real PI = 3.141592653
  funcao inicio() { 
    /* 
Desenvolva um pseudoc´odigo que calcule o volume
de uma lata, a partir de seu raio e sua altura. Considere que o volume ´e dado por:
volume = π × raio2 × altura.
    */
    real raio, altura, volume
    escreva("Informe o raio: ")
    leia(raio)
    escreva("Informe a altura: ")
    leia(altura)
    volume = PI * ((mat.potencia(raio, 2)) * altura)
    escreva("Volume = ", volume)
  }
}
