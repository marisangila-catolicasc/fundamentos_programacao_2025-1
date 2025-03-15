programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro numero_um, numero_dois
    inteiro calculo_um,calculo_dois,calculo_tres,calculo_quatro,calculo_cinco,calculo_seis
    escreva("Informe um número inteiro: ")
    leia(numero_um)
    escreva("Informe um segundo número inteiro: ")
    leia(numero_dois)
    calculo_um = numero_um + numero_dois
    calculo_dois = numero_um - numero_dois
    calculo_tres = numero_um * numero_dois
    calculo_quatro = numero_um / numero_dois
    calculo_cinco = mat.potencia(numero_um,numero_dois)
    calculo_seis = numero_um % numero_dois
    escreva("O resultado dos calculos são: ","\n",calculo_um,"\n",calculo_dois,"\n",calculo_tres,"\n",calculo_quatro,"\n",calculo_cinco,"\n",calculo_seis)
  }
}
