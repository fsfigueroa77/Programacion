#Escribir un programa que pregunte al usuario una cantidad a invertir, el interés anual y el número de años, y muestre por pantalla el capital obtenido en la inversión.

cantidad = float(input("Ingrese la cantidad a invertir: "))
interes = float(input("Ingrese el interes anual: "))
años = float(input("Ingrese el numero de años: "))

print("El capital obtenido en la inversion es: %.2f" % (cantidad + (cantidad * (interes/100) * años)))
