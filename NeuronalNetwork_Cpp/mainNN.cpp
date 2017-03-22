/*****************************************************************************/
/*  Module     : LineMain                                       Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : Main function for the LineClass, just demonstrates          */
/*               the usage of the LineClass objects                          */
/*                                                                           */
/*  Procedures: main()                                                       */
/*              FunctionWithLocalObject()  ToModify                          */
/*              TestFunction()             ToModify                          */
/*                                                                           */
/*  Author     : I. Oesch                                                    */
/*                                                                           */
/*  History    : 05.03.2001  IO Created                                      */
/*                                                                           */
/*  File       : LineMain.cpp                                                */
/*                                                                           */
/*****************************************************************************/
/* HTA Burgdorf                                                              */
/*****************************************************************************/

/* imports */
//#include "LineClass.hpp"
#include <iostream>
#include <stdlib.h>
#include <armadillo>

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
/*                LineClass demonstration. Creates some LineClass objects    */
/*                uses them and destrois them afterwards                     */
/*                                                                           */
/*  Type        : global                                                     */
/*                                                                           */
/*  Input Para  : argc, argv Standard commandline arguments, not used        */
/*                                                                           */
/*  Output Para : Errorcode to the operatingsystem, Allways no error         */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 21.02.2017      Created                                    */
/*                                                                           */
/*****************************************************************************/
int main(int argc, char *argv[])
{

	mat A(2, 3);

	A.fill(5.0);

	A.print("A:");

	// Wait for the user to press any key before end the program
	system("Pause");

	// Return No error to the operating system
	return 0;  // at this point, our two local objects are also deletet
}
/*****************************************************************************/
/*  End  Procedure : main                                                    */
/*****************************************************************************/





