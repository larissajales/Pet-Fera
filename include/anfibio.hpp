#ifndef ANFIBIO_H
#define ANFIBIO_H

#include <iostream>
#include "animal.hpp"

using namespace std;

	class Anfibio : public Animal {
		private:
			int total_de_mudas;
			//Date ultima_muda;

		public:
			Anfibio();
			Anfibio(int m_total_de_mudas);
			~Anfibio();

			void setTotalDeMudas(int m_total_de_mudas);
			int getTotalDeMudas();
	};

#endif