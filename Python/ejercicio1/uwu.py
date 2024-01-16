#Escribir un programa que pida al usuario dos números y muestre por pantalla su división. Si el divisor es cero el programa debe mostrar un error.

dividendo = int(input("Ingrese el primer numero (dividendo): "))
divisor = 0

while(divisor == 0):
    divisor = int(input("Ingrese el segundo numero (divisor): "))
    if (divisor == 0):
        print("Error. El divisor no debe ser igual a 0.")

print("El resultado de la division entre %d y %d es: %d." % (dividendo, divisor, dividendo / divisor))
