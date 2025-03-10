programa {
/*
(De Oliveira; Manzano, 2004) Desenvolva um pseudoc´odigo que receba um valor de
temperatura em graus Fahrenheit (ºF) e o converta para graus Celsius (ºC). Como
resultado, mostre a seguinte mensagem: “XXºF equivalem a YYºC.”. A f´ormula
de convers˜ao ´e:
celsius =
5×(fahrenheit−32)
9
.
*/
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    real fahren, celsius

    escreva("Quantos graus Fahrenheit (ºF): ")
    leia(fahren)

    celsius = mat.arredondar((5*(fahren-32))/9, 2) // arredondando para 2 casas decimais
    escreva(fahren, "ºF é igual a ", celsius," ºC")
  }
}
