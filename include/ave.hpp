#ifndef AVE_H_
#define AVE_H_

#include <iostream>
#include "animal.hpp"

using namespace std;

	class Ave : public Animal {
		private:
			double tamanho_do_bico;
			double envergadura_das_asas;

		public:
			Ave();
			Ave(double m_tamanho_do_bico, double m_envergadura_das_asas);
			~Ave();

			void setTamanhoDoBico(double m_tamanho_do_bico);
			double getTamanhoDoBico();

			void setEnvergaduraDasAsas(double m_envergadura_das_asas);
			double getEnvergaduraDasAsas();
	};

#endif