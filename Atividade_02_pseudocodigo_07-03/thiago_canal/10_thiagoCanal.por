programa {
  funcao inicio() {
    real grana
    inteiro anos

    escreva("Quanto deseja investir? ")
    leia(grana)
    escreva("Por quantos anos? ")
    leia(anos)

    real juros = grana * 0.05 * anos
    escreva("Ao final de ")
    escreva(anos)
    escreva(" anos")
    escreva(" você terá R$")
    escreva(juros)
    escreva(" de juros, totalizando R$")
    escreva(grana + juros)

  }
}
