#include "veterinario.hpp"

Veterinario::Veterinario()
{

}

Veterinario::Veterinario(string m_crmv)
{
	crmv = m_crmv;
}

Veterinario::~Veterinario()
{

}

void Veterinario::setCrmv(string m_crmv)
{
	crmv = m_crmv;
}

string Veterinario::getCrmv()
{
	return crmv;
}