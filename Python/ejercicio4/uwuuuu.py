#Escribir un programa que pida al usuario que introduzca una frase en la consola y muestre por pantalla la frase invertida.

frase = input("Ingrese una frase: ")
tamano_frase = len(frase)
frase_invertida = ""

for i in range(tamano_frase -1, -1, -1):
    frase_invertida += frase[i]

print(frase_invertida)
