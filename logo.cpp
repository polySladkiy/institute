#include <iostream>


void logotype(){
	char logo[]="\x1B[31m                      (                             \n"             
	"             (        )\\ )  (         (        )           \n"
	"             )\\ (    (()/(  )\\    )   )\\ )  ( /( (   (     \n"
	" `  )    (  ((_))\\ )  /(_))((_)( /(  (()/(  )\\()))\\  )\\ )  \n"
	" /(/(    )\\  _ (()/( (_))   _  )(_))  ((_))((_)\\((_)(()/(  \n" 
	"((_)_\\  ((_)| | )(_))/ __| | |((_)_   _| | | |(_)(_) )(_)) \n"
	"| '_ \\)/ _ \\| || || |\\__ \\ | |/ _` |/ _` | | / / | || || | \n"
	"| .__/ \\___/|_| \\_, ||___/ |_|\\__,_|\\__,_| |_\\_\\ |_| \\_, | \n"
	"|_|             |__/                                 |__/  \n\x1B[0m";

	std::cout << logo << std::endl;
}

int ResaltOfArgV(const char *argv[]){

	if (!(strcmp(argv[2], "-c"))){
		std::cout << "good\n";
	}
	return 0;

}