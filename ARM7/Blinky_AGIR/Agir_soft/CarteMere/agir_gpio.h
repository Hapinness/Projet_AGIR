/**********************************************************/
/*===================== PROJET AGIR ======================*/
/*--------------------------------------------------------*/
/*-- Projet AGIR [EI-SE4] 2014/2015 Polytech Paris'UPMC --*/
/*-- [GITHUB]: https://github.com/Hapinness/Projet_AGIR --*/
/*-- [MAIL]  :	polytech.projetagir@gmail.com            --*/
/*-- [FB]    :	Projet.Agir@groups.facebook.com          --*/
/*========================================================*/
/*----------------- [PROGRAMMEURS MAIL] ------------------*/
/*-- {Achab Lounes}      : achab.lounes@gmail.com       --*/
/*-- {Afonso Jordan}     : afonso.jordan@hotmail.fr     --*/
/*-- {Kalghdoost Afshin} : afshin_90@hotmail.fr         --*/
/*-- {Younsi Thin-hinane}: thin-hinane@hotmail.fr       --*/
/*========================================================*/
/**********************************************************/
#ifndef AGIR_GPIO_H
#define AGIR_GPIO_H

	#include <LPC23xx.H>

// DEFINITION DES NUMEROS DE PORTS

	#define P0 0
	#define P1 1
	#define P2 2
	#define P3 3
	#define P4 4

	#define TAILLE_ECRAN 17

	#define LED_GREEN   1
	#define LED_RED     0
	#define LED_ORANGE -1

	#define MARGEUR_00  0
	#define MARGEUR_01  1 
	#define MARGEUR_02  2
	#define MARGEUR_03  3
	#define MARGEUR_04  4

// DEFINITION des port et leurs pin pour les LED

	// MARGEUR 00
	#define PORT_LED_MAGEUR_00_GREEN		
	#define PIN_LED_MAGEUR_00_GREEN		
	
	#define PORT_LED_MAGEUR_00_ORANGE	
	#define PIN_LED_MAGEUR_00_ORANGE		

	#define PORT_LED_MAGEUR_00_RED			
	#define PIN_LED_MAGEUR_00_RED			

	// MARGEUR 01
	#define PORT_LED_MAGEUR_01_GREEN		
	#define PIN_LED_MAGEUR_01_GREEN		
	
	#define PORT_LED_MAGEUR_01_ORANGE	
	#define PIN_LED_MAGEUR_01_ORANGE		

	#define PORT_LED_MAGEUR_01_RED			
	#define PIN_LED_MAGEUR_01_RED			

	// MARGEUR 02
	#define PORT_LED_MAGEUR_02_GREEN		
	#define PIN_LED_MAGEUR_02_GREEN		
	
	#define PORT_LED_MAGEUR_02_ORANGE	
	#define PIN_LED_MAGEUR_02_ORANGE		

	#define PORT_LED_MAGEUR_02_RED			
	#define PIN_LED_MAGEUR_02_RED			

	// MARGEUR 03
	#define PORT_LED_MAGEUR_03_GREEN		
	#define PIN_LED_MAGEUR_03_GREEN		
	
	#define PORT_LED_MAGEUR_03_ORANGE	
	#define PIN_LED_MAGEUR_03_ORANGE		

	#define PORT_LED_MAGEUR_03_RED			
	#define PIN_LED_MAGEUR_03_RED			

	// MARGEUR 04
	#define PORT_LED_MAGEUR_04_GREEN		
	#define PIN_LED_MAGEUR_04_GREEN		
	
	#define PORT_LED_MAGEUR_04_ORANGE	
	#define PIN_LED_MAGEUR_04_ORANGE		

	#define PORT_LED_MAGEUR_04_RED			
	#define PIN_LED_MAGEUR_04_RED			


// DECLARATION DES PROTO

	void gpio_initialisation(void);
	void gpio_out_on   (unsigned int numero_port, unsigned int numero_pin); 
	void gpio_out_off  (unsigned int numero_port, unsigned int numero_pin); 
	char gpio_get_value(unsigned int numero_port, unsigned int numero_pin);
	void gpio_affichage(unsigned int numero_port, unsigned int numero_pin);


#endif

/**********************************************************/
/********************* FIN FICHIER ************************/
/**********************************************************/
