#include "mamifero.hpp"

Mamifero::Mamifero()
{

}

Mamifero::Mamifero(string m_cor_pelo)
{
	cor_pelo = m_cor_pelo;
}

Mamifero::~Mamifero()
{

}

void Mamifero::setCorDoPelo(string m_cor_pelo)
{
	cor_pelo = m_cor_pelo;
}

string Mamifero::getCorDoPelo()
{
	return cor_pelo;
}