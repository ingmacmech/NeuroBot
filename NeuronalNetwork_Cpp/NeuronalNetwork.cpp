/*****************************************************************************/
/*  Class      : NeuronalNetwork                                Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes the Neuronal Network			         */
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
	// each weight matrix is added with an additional column for bias
	for (int n = 0; n < nTheta; n++)
	{
		theta[n].set_size(layerSize[n + 1], layerSize[n] + 1);
		theta[n].fill(1.0);
		theta[n](span(0, 0), span(1, layerSize[n])).fill(0.0); // X0 and a0 always 0
	}

	/*###### Generate input and output ######*/
	input.set_size(layerSize[0] + 1);
	input.fill(1.0);
	output.set_size(layerSize[nLayer-1]);

	/*###### Generate hidden layer ######*/
	hiddenLayer = new vec[nLayer - 2];
	// 
	for (int n = 0; n < nLayer - 2; n++)
	{
		hiddenLayer[n].set_size(layerSize[n + 1] + 1);
		hiddenLayer[n].fill(1.0);
	}
}

/*****************************************************************************/
/*  End  Method : NeuronalNetwork                                            */
/*****************************************************************************/



/*****************************************************************************/
/*  Method      : Destructor                                                 */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Clean up resources				                         */
/*                                                                           */
/*  Type        : Public                                                     */
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
NeuronalNetwork::~NeuronalNetwork()
{
	
	std::cout << "\nNeuronalNetwork destroyed\n" << std::endl;

}
/*****************************************************************************/
/*  End  Method : Destructor                                                 */
/*****************************************************************************/


/*****************************************************************************/
/*  Method      : printLayerSize                                             */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Print the layer size to std::cout                          */
/*                                                                           */
/*  Type        : Public                                                     */
/*                                                                           */
/*  Input Para  : None								                         */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 28.03.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/
void NeuronalNetwork::printLayerSize()
{
	for (int n = 0; n < nLayer; n++)
	{
		std::cout << n << ": " << layerSize[n] << std::endl;
	}
}
/*****************************************************************************/
/*  End  Method : printLayerSize                                             */
/*****************************************************************************/


/*****************************************************************************/
/*  Method      : printTheta                                                 */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Print all weight matrices		                             */
/*                                                                           */
/*  Type        : Public                                                     */
/*                                                                           */
/*  Input Para  : None								                         */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 28.03.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/
void NeuronalNetwork::printTheta()
{
	for (int n = 0; n < nTheta; n++)
	{
		std::cout << "Theta" << n + 1 << ":" << std::endl;
		theta[n].print();
	}
}
/*****************************************************************************/
/*  End  Method : printTheta	                                             */
/*****************************************************************************/

/*****************************************************************************/
/*  Method      : printTheta                                                 */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Print all weight matrices		                             */
/*                                                                           */
/*  Type        : Public                                                     */
/*                                                                           */
/*  Input Para  : None								                         */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 28.03.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/
vec NeuronalNetwork::compute()
{
	for (int n = 0; n < nTheta; n++)
	{
		hiddenLayer[n] = theta[n] * input;

	}
	return output;
}

/*****************************************************************************/
/*  End  Method : printTheta	                                             */
/*****************************************************************************/


vec NeuronalNetwork::getOutput()
{
	return output;
}

/*****************************************************************************/
/*  End Class   : NeuronalNetwork                                            */
/*****************************************************************************/