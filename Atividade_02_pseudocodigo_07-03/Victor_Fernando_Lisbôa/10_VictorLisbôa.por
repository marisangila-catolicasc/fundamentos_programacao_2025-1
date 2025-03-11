programa {
  funcao inicio() {
    // valor final = valor inicial + (valor inicial × taxa juros × anos)

    real VI, VF

    escreva("Determine o valor a ser inserido: R$")
    leia(VI)
    
    VF = VI + (VI*0.05*3)
    escreva("O investimento de 3 anos resultaram em: R$", VF)
  }
}
