Algoritmo "Gasolina"

Var
kmlitro, preco, dist, result: real

Inicio
Escreval ("Digite a dist�ncia do percurso em kms: ")
leia (dist)
escreval ("Digite o pre�o atual da gasolina: ")
leia (preco)
escreval ("Digite quantos kms consome seu ve�culo por litro: ")
leia (kmlitro)
result <- dist / kmlitro
result <- result * preco
limpatela
escreva ("O valor gasto nesse percurso ser� de aproximadamente R$", result:1:2, " reais")

Fimalgoritmo