/*
1.
    D.E: venta, forma_pago
    Procesos: calcular venta total
    D.S: valor_total

INICIO

    ENTERO: venta
    REAL: valor_total
    ALFA_NUMERICO: forma_pago

    ESCRIBA "ingrese venta "
    LEA venta
    ESCRIBA "ingrese forma de pago"
    LEA  forma_pago
    
    SEGUN (forma_pago) HAGA
        CASO "efectivo" : SI (venta <= 100000) ENTONCES
            valor_total = venta - (venta * 0.20)
            SINO SI (venta > 100000 && venta <= 200000) ENTONCES 
                valor_total = venta - (venta * 0.30)
                SINO SI  (venta > 200000) ENTONCES 
                    valor_total = venta - (venta * 0.40)
                FIN SI
            FIN SI
        FIN SI
        FIN CASO
        CASO "Tarjeta" : SI (venta <= 100000) ENTONCES
            valor_total = venta - (venta * 0.10)
            SINO SI (venta > 100000 && venta <= 200000) ENTONCES 
                valor_total = venta - (venta * 0.15)
                SINO SI  (venta > 200000) ENTONCES 
                    valor_total = venta - (venta * 0.20)
                FIN SI
            FIN SI
        FIN SI
        FIN CASO
    FIN SEGUN

    ESCRIBA "el valor total es... "
    ESCRIBA valor_total

FIN

PRUEBA ESCRITORIO
venta = 100000
forma_pago = efectivo
valor_total = 90000

venta = 200000
forma_pago = tarjeta
valor_total = 160000

*/

/*
2.
INICIO

	REAL consu_agua, consu_energia, pagar_agua, pagar_energia, valor_total
	ENTERO estrato 
	ESCRIBIR "ingrese el consumo de agua ";
	LEA consu_agua;
	ESCRIBIR "ingrese el consumo de energia ";
	LEA consu_energia;
	ESCRIBIR "ingrese su estrato ";
	LEA estrato;
	SI (consu_agua <= 2000 y estrato >= 5) ENTONCES
		pagar_agua = (35000);
	SINO
		SI(consu_agua > 2000 y estrato >= 5) ENTONCES
			pagar_agua = (35000+((consu_agua-2000)*400));
		SINO
			SI(consu_agua <= 2000 y estrato <= 2) ENTONCES
				pagar_agua = (35000*0.9);
			SINO
				SI(consu_agua > 2000 y estrato <= 2) ENTONCES
					pagar_agua = ((35000+((consu_agua-2000)*400))*0.9);
				SINO
					SI(consu_agua <= 2000) ENTONCES
						pagar_agua = (35000*0.95);
					SINO
						pagar_agua = ((35000+((consu_agua-2000)*400))*0.95);
					FIN SI
				FIN SI
			FIN SI
		FIN SI
	FIN SI
	SI (consu_energia <= 3000 y estrato >= 5) ENTONCES
		pagar_energia = (30000*0.95);
	SINO
		SI(consu_energia > 3000 y estrato >= 5) ENTONCES
			pagar_energia = ((30000+((consu_energia-3000)*350))*0.95);
		SINO
			SI(consu_energia <= 3000 y estrato <= 2) ENTONCES
				pagar_energia = (30000*0.85);
			SINO
				SI(consu_energia > 3000 y estrato <= 2) ENTONCES
					pagar_energia = ((30000+((consu_energia-3000)*350))*0.85);
				SINO
					SI(consu_energia <= 3000) ENTONCES
						pagar_energia = (30000*0.9);
					SINO
						pagar_energia = ((30000+((consu_energia-3000)*350))*0.9);
					FIN SI
				FIN SI
			FIN SI
		FIN SI
	FIN SI
	valor_total = pagar_agua + pagar_energia;
	ESCRIBIR "valor a pagar agua es " pagar_agua;
	ESCRIBIR "valor a pagar energia es " pagar_energia;
	ESCRIBIR  "valor total a pagar " valor_total;

FIN

3.
INICIO
	ENTERO a,b,c  
	ESCRIBA "Ingrese lado a " 
	LEA a
	ESCRIBA "Ingrese lado b " 
	LEA b
	ESCRIBA "Ingrese lado c " 
	LEA c
	SI a < (b + c) ENTONCES
		ESCRIBA "Es un triangulo" 
	SINO
		SI b < (a + c) ENTONCES
			ESCRIBA "Es un triangulo" 
		SINO
			SI c < (a + b) ENTONCES
				ESCRIBA "Es un triangulo" 
			SINO
				ESCRIBA "No es un triangulo"
			FIN SI
		FIN SI
	FIN SI
	SI a = b y b = c ENTONCES
		ESCRIBA "Es triangulo equilatero" 
	SINO
		SI a<>b y b<>c y a<>c ENTONCES
			ESCRIBA "Es Triangulo escaleno" 
		SINO
			ESCRIBA "Es isosceles"  
		FIN SI
	FIN SI
FIN


4.

INICIO
	ENTERO a,b,c 
	ESCRIBA "ingrese el valor a "
	LEA  a;
	ESCRIBA "ingrese el valor b "
	LEA b;
	ESCRIBA "ingrese el valor c "
	LEA c;
	
	SI (a = b y a = c) ENTONCES
		ESCRIBA "hay 3 elementos iguales"
	SINO
		SI (a = b y a <> c) ENTONCES
			ESCRIBA "hay 2 elementos iguales"
		SINO
			SI(a = c y a <> b) ENTONCES
				ESCRIBA "hay 2 elementos iguales"
			SINO
				SI(b = c y b <> a) ENTONCES
					ESCRIBA "hay 2 elementos iguales"
				SINO
					ESCRIBA "todos los elementos son diferentes"
				FIN SI
			FIN SI
		FIN SI
	FIN SI

EJERCICIO INDEPENDIENTE
crear un Algoritmo que nos diga si una persona puede acceder a cursar un 
ciclo formativo de grado superior o no.
si se tiene un titulo de bachiller puede pasar, en caso de no tenerlo, 
se puede acceder si hemos superado una prueba de acceso. de lo contrario no.
si la prueba de acceso es menos a 6 no puede pasar

DATOS ENTRADA
bachiller, preuba_acceso, resultado
PROCESOS
calcular el resultado que ha sacado en la prueba_acceso
DATOS SALIDO
si ha pasado o no el el curso

INICIO
 CARACTER bachiller, prueba_acceso
 ENTERO resultado 

ESCRIBA "posee el titulo de bachiller?"
LEA bachiller
SI(bachiller="SI")ENTOCES
	ESCRIBA "puede pasar de grado"
SINO
	ESCRIBA "posee prueba de acceso"
	LEA prueba_acceso
	SI(prueba_acceso="no")ENTOCES
		ESCRIBA "no puede pasar de grado"
	SINO
		ESCRIBA "ingrese su resultado"
		LEA resultado
		SI(resultado > 5)ENTOCES
			ESCRIBA "puede pasar de grado"
		SINO
			ESCRIBA "no puede pasar de grado"
		FIN SI
	FIN SI
FIN SI
FIN

	

*/