programa {
  funcao inicio() {
    real f, c

    escreva("Digite a temperatura em Fahrenheit (somente números).\n")
    leia(f)

    c = (5*(f-32))/9
    
    escreva("A sua temperatura, em graus Celsius, é de ", c, "ºC")
  }
}
