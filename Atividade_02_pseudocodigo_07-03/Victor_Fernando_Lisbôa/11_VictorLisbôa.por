programa {
  inclua biblioteca Matematica
  funcao inicio() {
    real F, C

    escreva("Digite a temperatura em Fahrenheit (ºF): ")
    leia(F)
    C = (5*(F-32))/9
    C = Matematica.arredondar(C,2)
    escreva(F, "ºF equivalem aproximadamente: ", C,"ºC.")
  }
}
