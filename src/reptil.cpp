#include "reptil.hpp"

Reptil::Reptil()
{

}

Reptil::Reptil(bool m_venenoso, string m_tipo_veneno)
{
	venenoso = m_venenoso;
	tipo_veneno = m_tipo_veneno;
}

Reptil::~Reptil()
{

}

void Reptil::setVenenoso(bool m_venenoso)
{
	venenoso = m_venenoso;
}

bool Reptil::getVenenoso()
{
	return venenoso;
}

void Reptil::setTipoVeneno(string m_tipo_veneno)
{
	tipo_veneno = m_tipo_veneno;
}

string Reptil::getTipoVeneno()
{
	return tipo_veneno;
}