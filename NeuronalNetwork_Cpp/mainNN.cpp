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
	
	
	
	mat A(5, 5);


	A.set_size(4, 5); // change the size (data is not preserved)

	A.fill(5.0);     // set all elements to a particular value
	A.print("A:");

	// endr indicates "end of row"
	A << 0.165300 << 0.454037 << 0.995795 << 0.124098 << 0.047084 << endr
		<< 0.688782 << 0.036549 << 0.552848 << 0.937664 << 0.866401 << endr
		<< 0.348740 << 0.479388 << 0.506228 << 0.145673 << 0.491547 << endr
		<< 0.148678 << 0.682258 << 0.571154 << 0.874724 << 0.444632 << endr
		<< 0.245726 << 0.595218 << 0.409327 << 0.367827 << 0.385736 << endr;

	A.print("A:");

	A(span(0, 4), span(0, 0)).fill(4.0);
	A.print("A:");

	// Wait for the user to press any key before end the program
	system("Pause");
	// Return No error to the operating system
	return 0;  
}
/*****************************************************************************/
/*  End  Procedure : main                                                    */
/*****************************************************************************/





