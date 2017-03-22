/*****************************************************************************/
/*  Class      : OutputNN                                       Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes the output of a Neuronal Network       */
/*                                                                           */
/*                                                                           */
/*  Methodes   : OutputNN()					                                 */
/*              ~OutputNN()				                                     */
/*               get()														 */
/*				 set()														 */
/*                                                                           */
/*  Author     : ingmacmech                                                  */
/*                                                                           */
/*  History    : 22.03.20017    Created                                      */
/*                                                                           */
/*  File       : OutputNN.cpp					                             */
/*                                                                           */
/*****************************************************************************/
/* Artificial Neuronal Network                                               */
/*****************************************************************************/

/* imports */
#include "OutputNN.h"
#include <iostream>
#include <armadillo>

using namespace arma;

/* Class constant declaration  */

/* Class Type declaration      */

/* Class data declaration      */


/* Class procedure declaration */


/*****************************************************************************/
/*  Method      : OutputNN                                                   */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Constructor for the OutputNN class						 */
/*                                                                           */
/*  Type        : Constructor                                                */
/*                                                                           */
/*  Input Para  : None								                         */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 22.03.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/

OutputNN::OutputNN()
{

}

/*****************************************************************************/
/*  End  Method : LineClass                                                  */
/*****************************************************************************/



/*****************************************************************************/
/*  Method      : Destructor                                                 */
/*****************************************************************************/
/*                                                                           */
/*  Function    :   Clean up resources				                         */
/*                                                                           */
/*  Type        : Public                                                     */
/*                                                                           */
/*  Input Para  : None								                         */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 28.02.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/
OutputNN::~OutputNN()
{
	std::cout << "\nInputNN destroyed\n" << std::endl;

}

/*****************************************************************************/
/*  End  Method : Destructor                                                 */
/*****************************************************************************/

/*****************************************************************************/
/*  Method      : get		                                                 */
/*****************************************************************************/
/*                                                                           */
/*  Function    : get input vector					                         */
/*                                                                           */
/*  Type        : Public                                                     */
/*                                                                           */
/*  Input Para  : None								                         */
/*                                                                           */
/*  Output Para : Input Vector                                               */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 22.03.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/
vec OutputNN::get()
{
	return output;
}

/*****************************************************************************/
/*  End  Method : get                                                        */
/*****************************************************************************/

/*****************************************************************************/
/*  Method      : set		                                                 */
/*****************************************************************************/
/*                                                                           */
/*  Function    : set input vector					                         */
/*                                                                           */
/*  Type        : Public                                                     */
/*                                                                           */
/*  Input Para  : Input Vector								                 */
/*                                                                           */
/*  Output Para : None		                                                 */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 22.03.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/
void OutputNN::set(vec output)
{
	this->output = output;
	nOutput = output.size();
}

/*****************************************************************************/
/*  End  Method : set		                                                 */
/*****************************************************************************/







/*****************************************************************************/
/*  End Class   : LineClass                                                  */
/*****************************************************************************/