#ifndef REPTIL_H_
#define REPTIL_H_

#include <iostream>
#include <string>
#include "animal.hpp"

using namespace std;

	class Reptil : public Animal {
		private:
			bool venenoso;
			string tipo_veneno;

		public:
			Reptil();
			Reptil(bool m_venenoso, string m_tipo_veneno);
			~Reptil();

			void setVenenoso(bool m_venenoso);
			bool getVenenoso();

			void setTipoVeneno(string m_tipo_veneno);
			string getTipoVeneno();
	};

#endif