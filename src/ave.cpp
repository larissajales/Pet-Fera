#include "ave.hpp"

Ave::Ave()
{

}

Ave::Ave(double m_tamanho_do_bico, double m_envergadura_das_asas)
{
	tamanho_do_bico = m_tamanho_do_bico;
	envergadura_das_asas = m_envergadura_das_asas;
}

Ave::~Ave()
{

}

void Ave::setTamanhoDoBico(double m_tamanho_do_bico)
{
	tamanho_do_bico = m_tamanho_do_bico;
}

double Ave::getTamanhoDoBico()
{
	return tamanho_do_bico;
}

void Ave::setEnvergaduraDasAsas(double m_envergadura_das_asas)
{
	envergadura_das_asas = m_envergadura_das_asas;
}

double Ave::getEnvergaduraDasAsas()
{
	return envergadura_das_asas;
}