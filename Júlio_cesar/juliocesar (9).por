programa {
  funcao inicio() {
    
    real preco_compra, impostos, representate
  

    escreva("insira o preco da sua compra\n")
    leia(preco_compra)

    impostos= preco_compra*0.2
    representate= preco_compra*0.3

    escreva("O valor final da sua compra será ",preco_compra+impostos+representate,"\n")

 
  }
}
