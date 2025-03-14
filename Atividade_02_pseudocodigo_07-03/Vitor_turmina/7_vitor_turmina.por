programa {
  funcao inicio() {

    real dolar, valor_cambio

    escreva("Qual o valor do dólar hoje?\n")
    leia(valor_cambio)
    escreva("Quantos dólares você quer?\n")
    leia(dolar)

    escreva("Para $", dolar, " são necessários R$", dolar * valor_cambio)
  }
}
