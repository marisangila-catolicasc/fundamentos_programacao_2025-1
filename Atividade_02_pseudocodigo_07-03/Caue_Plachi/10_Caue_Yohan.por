programa {
  const real anos = 3, juros = 0.05
  funcao inicio() {
    real  valor_investido, valor_final
    escreva("Coloque o valor inicial a ser investido \n")
    leia(valor_investido)
    valor_final = valor_investido + (valor_investido * juros * anos)
    escreva("O valor do investimento após 3 anos foi de ", valor_final)
  }
}
