#include "funcionario.hpp"

Funcionario::Funcionario()
{

}

Funcionario::Funcionario(int m_id, string m_nome, string m_cpf, string m_especialidade, short m_idade, short m_tipo_sanguineo, char m_fator_rh)
{
	id = m_id;
	nome = m_nome;
	cpf = m_cpf;
	especialidade = m_especialidade;
	idade = m_idade;
	tipo_sanguineo = m_tipo_sanguineo;
	fator_rh = m_fator_rh;
}

Funcionario::~Funcionario()
{

}

void Funcionario::setId(int m_id)
{
	id = m_id;
}

int Funcionario::getId()
{
	return id;
}

void Funcionario::setNome(string m_nome)
{
	nome = m_nome;
}

string Funcionario::getNome()
{
	return nome;
}

void Funcionario::setCpf(string m_cpf)
{
	cpf = m_cpf;
}

string Funcionario::getCpf()
{
	return cpf;
}

void Funcionario::setEspecialidade(string m_especialidade)
{
	especialidade = m_especialidade;
}

string Funcionario::getEspecialidade()
{
	return especialidade;
}

void Funcionario::setIdade(short m_idade)
{
	idade = m_idade;
}

short Funcionario::getIdade()
{
	return idade;
}

void Funcionario::setTipoSanguineo(short m_tipo_sanguineo)
{
	tipo_sanguineo = m_tipo_sanguineo;
}

short Funcionario::getTipoSanguineo()
{
	return tipo_sanguineo;
}

void Funcionario::setFatorRh(char m_fator_rh)
{
	fator_rh = m_fator_rh;
}

char Funcionario::getFatorRh()
{
	return fator_rh;
}