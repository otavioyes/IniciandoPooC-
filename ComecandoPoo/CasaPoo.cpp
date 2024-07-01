#include <iostream>
#include <locale>


class Casa {

/*ATRIBUTOS: */
public :
	int NumeroQuartos{ 10 };
	float Tamanho{ 250.10f };
	bool bTemSuite{ false };



/*M�TODOS: */
public:
	void MostarTamanho();
	int ObterNumeroDeQuartos();
	bool TemSuite();
	void setNumQuartos(int Num);



};

int main() {

	setlocale(LC_ALL, "portuguese");

	Casa CasaDePraia;
	CasaDePraia.MostarTamanho();
	CasaDePraia.setNumQuartos(6);
	std::cout << "\nNumero de quartos: " << CasaDePraia.ObterNumeroDeQuartos();
	std::cout << "\nTem su�te? ";
	CasaDePraia.TemSuite() ? (std::cout << " Sim\n") : (std::cout << "N�o\n");
	//CasaDePraia.setNumQuartos(1000);

	return 0;

}

void Casa::MostarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;

}


int Casa::ObterNumeroDeQuartos()
{
	return NumeroQuartos;

}


bool Casa::TemSuite()
{
	return bTemSuite;

}

void Casa::setNumQuartos(int Num)
{
	if (Num <= 6 && Num >= 0) {
		
		NumeroQuartos = Num;
	}
	else {
		std::cout << "\nN�mero de quartos invalidos.\n";
	}

}
