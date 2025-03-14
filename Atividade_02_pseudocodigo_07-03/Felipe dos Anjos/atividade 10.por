programa {
    funcao inicio() {
        
        real valorInicial, valorFinal
        real taxaJuros = 0.05 
        inteiro anos = 3 

        
        escreva("Digite o valor investido por Maria: ")
        leia(valorInicial)
        valorFinal = valorInicial + (valorInicial * taxaJuros * anos)
        escreva("O valor final do investimento após ", anos, " anos será: ", valorFinal)
    }
}
