programa {
  inclua biblioteca Matematica --> mat  
  funcao inicio() {
    inteiro n1, n2, ad, sub 
    real div, pot, resto

    escreva("Digite um número\n")
    leia(n1)
    escreva("Digite outro número\n")
    leia(n2)

    ad = n1 + n2
    sub = n1 - n2
    div = n1 / n2
    pot = mat.potencia(n1,n2)
    resto = n1 % n2

    escreva("A soma dos dois números é \n",ad," \na subtração é\n ", sub, " \na divisão é \n", div, "\n o ", n1, " elevado a ", n2, " é  igual a \n", pot, "\n e  o resto da divisão dos dois números é igual a \n",resto)
    

  }
}
