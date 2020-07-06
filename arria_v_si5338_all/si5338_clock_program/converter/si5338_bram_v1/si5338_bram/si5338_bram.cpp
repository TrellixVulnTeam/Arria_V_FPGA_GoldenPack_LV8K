// si5338_bram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <limits>
#include <sstream>

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <direct.h>


int main(){

	std::string line;
	std::string line_tmp;
	std::string file_name;

	std::size_t found;

	std::ifstream si5338_file("Si5338-RevB-Registers.h");

	if (!si5338_file.is_open()) {
		std::cout << "Cannot open the register file from si5338 init.\n";
		system("pause");
		return 0;
	}

	std::cout << "Start convert si5338 register data to mif BRAM file.\n";

	file_name = "si5338_rom.mif";

	std::ofstream outfile(file_name);
	std::cout << std::endl;

	while (getline(si5338_file, line)) {

		found = line.find("Reg_Data const code Reg_Store[NUM_REGS_MAX] = {");
		if(found != std::string::npos) {
			goto start_process;
		}
	}

	goto end_process;

	start_process:

	outfile << "WIDTH=16;" << std::endl;
	outfile << "DEPTH=256;" << std::endl;
	outfile << "ADDRESS_RADIX=HEX;" << std::endl;
	outfile << "DATA_RADIX=HEX;" << std::endl;
	outfile << "CONTENT BEGIN" << std::endl;

	int bram_line_cnt = 0;

	// Disable Outputs
	// Set OEB_ALL = 1; reg230[4]
	outfile << std::setfill('0') << std::setw(3) << std::hex << bram_line_cnt << " : E610;" << std::endl;
	bram_line_cnt++;
	
	// Pause LOL
	// Set DIS_LOL = 1; reg241[7]
	outfile << std::setfill('0') << std::setw(3) << std::hex << bram_line_cnt << " : F180;" << std::endl;
	bram_line_cnt++;

	while (getline(si5338_file, line)) {
		
		found = line.find("//End of file");
		if(found != std::string::npos) {
			break;
		}

		int iic_addr = std::stoi(line.substr(1, 3));
		int iic_data = 0;

		if (line.substr(5, 2) == "0x") {
			iic_data = std::stoi(line.substr(7, 2), 0, 16);

			if (line.substr(10, 4) == "0x00") {
				goto skip_this_line;
			}
		}
		else {
			iic_data = std::stoi(line.substr(5, 2));

			if (line.substr(8, 4) == "0x00") {
				goto skip_this_line;
			}
		}

		outfile << std::setfill('0') << std::setw(3) << std::hex << bram_line_cnt << " : " << std::setfill('0') << std::setw(2) << std::hex << iic_addr << std::setfill('0') << std::setw(2) << std::hex << iic_data << ";" << std::endl;
		bram_line_cnt++;

	skip_this_line:
		iic_addr = 0;
		iic_data = 0;
	}

	// Configure PLL for locking
	// Set FCAL_OVRD_EN = 0; reg49[7]
	outfile << std::setfill('0') << std::setw(3) << std::hex << bram_line_cnt << " : F180;" << std::endl;
	bram_line_cnt++;

	while (bram_line_cnt < 256) {
		outfile << std::setfill('0') << std::setw(3) << std::hex << bram_line_cnt << " : 0000;" << std::endl;
		bram_line_cnt++;
	}

	outfile << "END;" << std::endl;

	end_process:
	si5338_file.close();

	outfile.clear();
	outfile.close();

	system("pause");
	return 0;
}

