/*****************************************************************************/
/*  Class      : NeuronalNetwork                                Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes the Neuronal Network			         */
/*                                                                           */
/*                                                                           */
/*  Methodes   :							                                 */
/*										                                     */
/*																			 */
/*																			 */
/*                                                                           */
/*  Author     : ingmacmech                                                  */
/*                                                                           */
/*  History    : 23.03.20017    Created                                      */
/*                                                                           */
/*  File       : NeuronalNetwork.cpp    		                             */
/*                                                                           */
/*****************************************************************************/
/* Artificial Neuronal Network                                               */
/*****************************************************************************/

/* imports */
#include "NeuronalNetwork.h"
#include <iostream>
#include <armadillo>

using namespace arma;

/* Class constant declaration  */

/* Class Type declaration      */

/* Class data declaration      */


/* Class procedure declaration */


/*****************************************************************************/
/*  Method      : NeuronalNetwork                                                    */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Constructor for the NeuronalNetwork class                  */
/*                                                                           */
/*  Type        : Constructor                                                */
/*                                                                           */
/*  Input Para  : None								                         */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 23.03.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/
NeuronalNetwork::NeuronalNetwork(int nLayer, int layerSize[])
{
	/*###### Copy ######*/
	this->layerSize = new int[nLayer];
	nTheta = nLayer - 1;
	this->nLayer = nLayer;
		
	for (int i = 0; i < nLayer; i++)
	{
		this->layerSize[i] = layerSize[i];
	}
	
	/*###### Gen weight matrices ######*/
	// for n layer it needs n-1 weight  matrices
	theta = new mat[nTheta];
	// size of each weight matrix is added with an additional column for bias
	for (int n = 0; n < nTheta; n++)
	{
		theta[n].set_size(layerSize[n + 1], layerSize[n] + 1);
		theta[n].fill(1.0);	
	}

	/*###### Gen input and output ######*/
	input = new InputNN(layerSize[0]);
	output = new OutputNN(layerSize[nLayer-1]);
}

/*****************************************************************************/
/*  End  Method : InputNN                                                    */
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
NeuronalNetwork::~NeuronalNetwork()
{
	
	std::cout << "\nNeuronalNetwork destroyed\n" << std::endl;

}

/*****************************************************************************/
/*  End  Method : Destructor                                                 */
/*****************************************************************************/

void NeuronalNetwork::printLayerSize()
{
	for (int n = 0; n < nLayer; n++)
	{
		std::cout << n << ": " << layerSize[n] << std::endl;
	}
}

void NeuronalNetwork::printTheta()
{
	for (int n = 0; n < nTheta; n++)
	{
		std::cout << "Theta" << n + 1 << ":" << std::endl;
		theta[n].print();
	}
}

/*****************************************************************************/
/*  End Class   : NeuronalNetwork                                            */
/*****************************************************************************/