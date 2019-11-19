#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>

using namespace std;

	class Funcionario {
		protected:
			int id;
			string nome;
			string cpf;
			string especialidade;
			short idade;
			short tipo_sanguineo;
			char fator_rh;

		public:
			Funcionario();
			Funcionario(int m_id, string m_nome, string m_cpf, string m_especialidade, short m_idade, short m_tipo_sanguineo, char m_fator_rh);
			~Funcionario();

			void setId(int m_id);
			int getId();

			void setNome(string m_nome);
			string getNome();

			void setCpf(string m_cpf);
			string getCpf();

			void setEspecialidade(string m_especialidade);
			string getEspecialidade();

			void setIdade(short m_idade);
			short getIdade();

			void setTipoSanguineo(short m_tipo_sanguineo);
			short getTipoSanguineo();

			void setFatorRh(char m_fator_rh);
			char getFatorRh();
	};

#endif