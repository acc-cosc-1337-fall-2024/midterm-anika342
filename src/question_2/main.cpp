#include "question2.cpp"
#include <iostream>
#include <string>

int main() 
{	
    //entering given dna into variable "dna"
	std::string dna = "GATGGAACTTGACTACGTAAATT";
	std::string resultString; 
			
    std::cout << "Transcribing the following DNA into RNA:" << std::endl;
    std::cout << dna << std::endl;
	resultString=transcribe_dna_into_rna(dna);
	std::cout << "Transcribed RNA is: " << resultString << std::endl;
	
	return 0;
}
