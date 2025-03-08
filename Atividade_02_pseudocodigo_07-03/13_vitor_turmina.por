programa {
  funcao inicio() {

    real a, b, auxiliar

    escreva("Informe os valores de 'a' e 'b' respectivamente:\n")
    leia(a)
    leia(b)

    auxiliar = a
    a = b 
    b = auxiliar
    
    escreva("a = ",a,"\n")
    escreva("b = ",b,"\n")
  }
}
