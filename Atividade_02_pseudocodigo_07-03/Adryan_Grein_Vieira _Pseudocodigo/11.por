programa {
  funcao inicio() {
    real fahrenheit
    inteiro celcius
    escreva("Insira um valor em Fahrenheit: ")
    leia(fahrenheit)
    celcius = ((5*(fahrenheit-32))/9)
    escreva(fahrenheit,"ºF Equivalem a: ", celcius,"ºC")
  }
}
