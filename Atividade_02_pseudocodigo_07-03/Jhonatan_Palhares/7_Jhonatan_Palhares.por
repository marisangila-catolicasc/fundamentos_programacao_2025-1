programa {
  funcao inicio() {
    real quantidade, preco_dolar, valor

    escreva("Qual a cotação do dólar hoje em real?\n")
    leia(preco_dolar)
    escreva("\nVocê deseja comprar quantos dólares hoje?\n")
    leia(quantidade)

    valor = preco_dolar * quantidade

    escreva("\nVocê precisará de R$", valor, " para comprar essa quantia de dólares.")
  }
}
