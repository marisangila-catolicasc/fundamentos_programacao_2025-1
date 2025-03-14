programa {
  inclua biblioteca Matematica --> mat 
  const real pi = 3.1415
  funcao inicio() {
    real altura, raio, volume

    escreva("Digite o raio:\n")
    leia(raio)
    escreva("Digite a altura:\n")
    leia(altura)
    volume = mat.potencia(raio,2) * pi * altura

    escreva("o volume é igual a: "+volume)    
  }
}
