programa {
  funcao inicio() { 
    /* 
Desenvolva um algoritmo que funcione como um
conversor de d´olar para real. O usu´ario dever´a informar o valor do cˆambio do
d´olar naquele dia e o valor em d´olares que deseja converter. Como sa´ıda, o algoritmo dever´a mostrar quantos reais s˜ao necess´arios 
para comprar X d´olares:
real = quantidade de dolares × cambio
    */
    real cambio, dolares, reais // cambio hoje 5.79
    escreva("Digite o cambio atual do Dolar: ")
    leia(cambio)
    escreva("Digite o valor que você queira converter para REAIS: ")
    leia(dolares)
    reais = dolares * cambio
    escreva("Você terá R$", reais)

  }
}
