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

	#include <LPC23xx.H>

	#define SIZE_MSG 1
	#define ID_MODULE_01 01
	#define ID_MODULE_02 02
	#define ID_MODULE_03 03
	#define ID_MODULE_04 04

	unsigned long CAN_RECEPTION;

	// DECLARATION DES PRO

	void can_initialisation(void);
	void isr_can_reception(void)__irq;
	void can_emission(unsigned long valeur ,unsigned char id_message);


/**********************************************************/
/********************* FIN FICHIER ************************/
/**********************************************************/