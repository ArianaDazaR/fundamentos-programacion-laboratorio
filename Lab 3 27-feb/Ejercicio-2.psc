Algoritmo PagoIngresoMensual
	
	Definir nombre Como Caracter
	Definir hora, pagohora, diaslaborables, pagomes Como Entero
	
	Escribir "Ingreso Mensual"
	Escribir ""
	
	Escribir "Nombre del tranajador: "
	Leer nombre
	
	Escribir "Ingrese horas trabajadas al día: "
	Leer hora
	
	Escribir "Ingrese días laborales del mes: "
	Leer diaslaborales
	
	Escribir "Ingrese pago por hora: "
	Leer pagohora
	
	pagomes <- hora * diaslaborales * pagohora
	
	Escribir ""
	Escribir "El Ingreso Total Mensual es de: ", pagomes
	
FinAlgoritmo
