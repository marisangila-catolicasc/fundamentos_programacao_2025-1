programa {
  funcao inicio() {
    /*esenvolva um pseudoc´odigo que pe¸ca ao usu´ario, a idade e o peso de seu pet, e
    qual tipo de pet. Se for cachorro o usu´ario deve digitar c, se for gato, digita g.
    Mostre as entradas na tela*/
    cadeia tipo_animal
    inteiro idade
    real peso
    escreva("Olá, qual tipo de pet vossa pessoa possui? C-(Cachorro) G-(Gato)")
    leia(tipo_animal)
    escreva("Qual a idade do seu pet?")
    leia(idade)
    escreva("Qual o peso de seu pet?")
    leia(peso)
    escreva("Tipo de animal: ",tipo_animal,"\n","Idade:",idade,"\n","Peso:",peso)
  }
}
