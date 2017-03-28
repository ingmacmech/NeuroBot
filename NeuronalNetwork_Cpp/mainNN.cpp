/*****************************************************************************/
/*  Module     : mainNN                                         Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : Main function for the mainNN, just demonstrates             */
/*               the usage of the Neuronal Network                           */
/*                                                                           */
/*  Procedures: main()                                                       */
/*																			 */
/*  Author     : ingmacmech                                                  */
/*                                                                           */
/*  History    : 22.03.2017  IO Created                                      */
/*                                                                           */
/*  File       : mainNN.cpp                                                  */
/*                                                                           */
/*****************************************************************************/
/* Artificial Neuronal Networks                                              */
/*****************************************************************************/

/* imports */
#include <iostream>
#include <stdlib.h>
#include <array>
#include <armadillo>

/*user iports*/
#include "NeuronalNetwork.h"


using namespace arma;


/* Module constant declaration  */

/* Module Type declaration      */

/* Module data declaration      */


/* Module procedure declaration */




/*****************************************************************************/
/*  Procedure   : main                                                       */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Is the entrypoint and the main procedure for the           */
/*                NeuronalNetwork demonstration.							 */
/*				  Creates a test Bot for connect4							 */
/*                                                                           */
/*  Type        : global                                                     */
/*                                                                           */
/*  Input Para  : argc, argv Standard commandline arguments, not used        */
/*                                                                           */
/*  Output Para : Errorcode to the operatingsystem, Allways no error         */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 22.03.2017      Created                                    */
/*                                                                           */
/*****************************************************************************/
int main(int argc, char *argv[])
{
	int sizeOfLayer[4] = { 5, 4, 6, 5};
	NeuronalNetwork testNN(4, sizeOfLayer);
	
	
	testNN.printLayerSize();
	testNN.printTheta();
	
	
	
	mat A(2, 3);

	A.fill(5.0);

	A.print("A:");

	// Wait for the user to press any key before end the program
	system("Pause");
	// Return No error to the operating system
	return 0;  
}
/*****************************************************************************/
/*  End  Procedure : main                                                    */
/*****************************************************************************/





