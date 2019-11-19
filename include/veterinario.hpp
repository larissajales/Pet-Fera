#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

	class Veterinario : public Funcionario {
		private:
			string crmv;

		public:
			Veterinario();
			Veterinario(string m_crmv);
			~Veterinario();

			void setCrmv(string m_crmv);
			string getCrmv();
	};

#endif