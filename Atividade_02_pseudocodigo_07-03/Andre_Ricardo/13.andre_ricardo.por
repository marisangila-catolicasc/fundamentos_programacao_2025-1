programa {
  funcao inicio() {
   inteiro a, b, guardar_valor
   escreva("Escreva o primeiro número: ")
   leia(a)
   escreva("Escreva o segundo número: ")
   leia(b)
   escreva("Antes da troca A = ", a, " e B = ",b, "\n")
   guardar_valor = a
   a = b 
   b = guardar_valor
   escreva("O valor após a troca é: a = ", a," e B = ", b,"\n")
  }
}
