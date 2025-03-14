programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
  real fahrenheit
  inteiro celsius

  escreva("Digite a temperatura em fahrenheit:\n")
  leia(fahrenheit)

  celsius = 5 * (fahrenheit - 32) / 9
  escreva(fahrenheit, "°F equivalem a ", celsius, "°C")
  
    
  }
}
