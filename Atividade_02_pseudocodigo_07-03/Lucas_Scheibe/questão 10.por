programa {
  funcao inicio() {
    real valor_final
    real valor_inicial
    

    escreva("qual o seu valor inicial investido? \n")
     leia (valor_inicial)

     valor_final = valor_inicial + (valor_inicial * 0.05 * 3)

     escreva("após 3 anos seu investimento final virou: ",valor_final, " reais")
  }
}

