programa {
  funcao inicio() {

  real temperatura_celcius
  real temperatura_fahrenheit

  escreva("Informe a temperatura em Fahrenheit: ")
  leia(temperatura_fahrenheit)

  temperatura_celcius = 5 * (temperatura_fahrenheit - 32) /9

  escreva(temperatura_fahrenheit, "ºF ", "equivalem a: ", temperatura_celcius, "ºC")
  }
}
