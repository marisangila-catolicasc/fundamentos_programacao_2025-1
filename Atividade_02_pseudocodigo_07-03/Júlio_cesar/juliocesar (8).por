programa {
  funcao inicio() {
    
    real valor_investimento, valor_retorno
    const real anos =3, taxa=0.05

  escreva("Qual o valor que deseja investir?\n")
  leia(valor_investimento)

  valor_retorno = valor_investimento + (valor_investimento * anos * taxa)
  escreva("seu valor apos 3 anos sera de R$",valor_retorno)

  escreva("\n",valor_retorno - valor_investimento, " será o seu lucro")
  }
}
