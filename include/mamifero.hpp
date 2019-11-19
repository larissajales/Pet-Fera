#ifndef MAMIFERO_H_
#define MAMIFERO_H_

#include <iostream>
#include <string>
#include "animal.hpp"

using namespace std;

	class Mamifero : public Animal {
		private:
			string cor_pelo;

		public:
			Mamifero();
			Mamifero(string m_cor_pelo);
			~Mamifero();

			void setCorDoPelo(string m_cor_pelo);
			string getCorDoPelo();
	};

#endif