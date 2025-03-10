programa {
  funcao inicio() {
    real var1, var2, coringa

    escreva("Insira o valor da primeira variável (Variável A): \n")
    leia(var1)

    escreva("Insira o valor da segunda variável (Variável B): \n")
    leia(var2)

    coringa = var1
    var1 = var2 
    var2 = coringa

    escreva("Após a inversão dos valores, a Variável A recebeu o valor de ", var1, ", E a Variável B recebeu o valor de ", var2, "!")
  }
}
