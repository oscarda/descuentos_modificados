
def sumar(n1, n2):
	print("\nSumando... {}+{}={}".format(n1, n2, n1+n2))

def restar(n1, n2):
	print("\nRestando... {}-{}={}".format(n1, n2, n1-n2))

def multiplicar(n1, n2):
	print("\nMultiplicando... {}x{}={}".format(n1, n2, n1*n2))

def dividir(n1, n2):
	print("\nDividiendo... {}/{}={}".format(n1, n2, n1/n2))
	
def calcular(opc, op1, op2):
	operaciones=[sumar, restar, multiplicar, dividir]
	operaciones[opc](op1, op2)
	
def main():
	n1=int(input("Introduce el primer operando: "))
	n2=int(input("Introduce el segundo operando: "))

	print("Elige la opción de tu operación:")
	print("1) Suma: {}+{}".format(n1,n2))
	print("2) Resta: {}-{}".format(n1,n2))
	print("3) Multiplicación: {}x{}".format(n1,n2))
	print("4) División: {}/{}".format(n1,n2))
	
	opcion=0	
	while opcion<1 or opcion>4:		
		opcion= int(input("Introduce valor entre 1-4> "))
		
	calcular(opcion-1, n1, n2)
	

main()
		
