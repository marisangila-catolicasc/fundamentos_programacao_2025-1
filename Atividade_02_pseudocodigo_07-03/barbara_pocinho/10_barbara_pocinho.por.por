programa {
  const real imposto = 0.5
  funcao inicio() {
    real valor_investido, valor_final

    escreva("Digite o valor que será investido: \n")
    leia(valor_investido)

    valor_final = valor_investido + valor_investido*imposto*3

    escreva("Voce terá "+valor_final + " reais após 3 anos")
    
  }
}
