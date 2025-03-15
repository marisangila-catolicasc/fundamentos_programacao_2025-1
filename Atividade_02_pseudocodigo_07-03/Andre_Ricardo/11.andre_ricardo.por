programa {
  funcao inicio() {
    real temperaura_fahreint
    real temperatura_celsius
    escreva("Digite a temperatura em fahrenheit que deseja converter em celsius: ")
    leia(temperaura_fahreint)
    temperatura_celsius = 5*(temperaura_fahreint-32)/9
    escreva(temperaura_fahreint, "ºF equivalem a ", temperatura_celsius, "ºC")
  }
}
