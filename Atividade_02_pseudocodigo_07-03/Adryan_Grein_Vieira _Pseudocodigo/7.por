programa {
  funcao inicio() {
    real cambio, valor_dolar_converter,reais_apagar
    escreva("Qual o valor de 1(Um) dólar hoje? ")
    leia(cambio)
    escreva("Quantos dólares deseja converter em reais? ")
    leia(valor_dolar_converter)
    reais_apagar = valor_dolar_converter*cambio
    escreva("Para Comprar: ",valor_dolar_converter," Dólares", "\nSão necessários: R$", reais_apagar, "Reais")
  }
}
