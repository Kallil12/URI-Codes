quant_palavras = int(input())
lista_palavras = []

for pega_palavras in range(quant_palavras):
    palavra = input()
    lista_palavras.append(palavra)

for palavras in lista_palavras:
  letras_indice_par = []
  letras_indice_impar = []
  for i in range(len(palavras)):
    if i%2 == 0:
      letras_indice_par.append(palavras[i])
    else:
      letras_indice_impar.append(palavras[i])

  letras_pares = ''.join(map(str,letras_indice_par))
  letras_impares = ''.join(map(str,letras_indice_impar))
  print(letras_pares,letras_impares)
