#ifndef TRATADOR_H_
#define TRATADOR_H_

#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

	class Tratador : public Funcionario {
		private:
			int nivel_de_seguranca;

		public:
			Tratador();
			Tratador(int m_nivel_de_seguranca);
			~Tratador();

			void setNivelDeSeguranca(int m_nivel_de_seguranca);
			int getNivelDeSeguranca();
	};

#endif