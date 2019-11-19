#include "tratador.hpp"

Tratador::Tratador()
{

}

Tratador::Tratador(int m_nivel_de_seguranca)
{
	nivel_de_seguranca = m_nivel_de_seguranca;
}

Tratador::~Tratador()
{

}

void Tratador::setNivelDeSeguranca(int m_nivel_de_seguranca)
{
	nivel_de_seguranca = m_nivel_de_seguranca;
}

int Tratador::getNivelDeSeguranca()
{
	return nivel_de_seguranca;
}