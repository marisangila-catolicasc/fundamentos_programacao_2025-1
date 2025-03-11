programa {
  funcao inicio() {
    
    real valor
    real imposto
    real comi

   escreva("qual o valor base do seu produto?")
   leia(valor)

   imposto = (valor / 100) * 30
   comi = (valor /100) * 20

   escreva("valor origianal= " ,valor, "\n")

  
   
   escreva("valor origianal + imposto= " ,valor + imposto, "\n")

   
   escreva("valor origianal + representante= " ,valor + comi, "\n")

  escreva("valor origianal + representante= " ,valor + comi + imposto, "\n")



  }
}
